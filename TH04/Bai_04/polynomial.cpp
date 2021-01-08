#include "polynomial.h"
#include <iostream>
#include <math.h>
using namespace std;

polynomial::polynomial(){};

void polynomial::input()
{
    cout << "Degree: ";
    cin >> deg;
    arr = new monomial[deg+1];
    cout << "Input mononials." << endl;
    for (int i = 0; i <= deg; i++)
    {
        arr[i] = monomial(i);
        cout << "Monomial degree " << i << " has ";
        arr[i].inputCoef();
    }
}
void polynomial::output()
{
    for (int i = deg; i >= 0; i--)
    {
        arr[i].output();
        if (i != 0)
        {
            cout << " + ";
        }
    }
}
polynomial polynomial::addWithSmallerDeg (polynomial p1)
{
    polynomial result;
    result.deg = this->deg;
    result.arr = new monomial[result.deg+1];
    int diff = this->deg - p1.deg;
    for (int i = result.deg; i >= 0; i--)
    {
        if (diff > 0)
        {
            result.arr[i].assign(this->arr[i]);
            diff--;
        }
        else
        {
            result.arr[i].assign(this->arr[i].addSameDeg(p1.arr[i]));
        }
    }
    return result;
}
polynomial polynomial::add (polynomial p1)
{
    if (this->deg >= p1.deg)
    {
        return this->addWithSmallerDeg(p1);
    }
    else
    {
        return p1.addWithSmallerDeg(* this);
    }
}

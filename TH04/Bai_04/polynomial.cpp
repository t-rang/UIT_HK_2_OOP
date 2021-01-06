#include "polynomial.h"
#include <iostream>
#include <math.h>
using namespace std;
/*
 polynomial add (polynomial p1);
 polynomial subtract (polynomial p1);
 polynomial multiply (polynomial p1);
 polynomial divide (polynomial p1);
 */
polynomial::polynomial(){};

void polynomial::input()
{
    cout << "Degree: ";
    cin >> deg;
    arr = new monomial[deg];
    cout << "Input mononials." << endl;
    for (int i = deg-1; i >= 0; i--)
    {
        arr[i] = monomial(i+1);
        cout << "Monomial degree " << i+1 << " has ";
        arr[i].inputCoef();
    }
}
void polynomial::output()
{
    for (int i = deg-1; i >= 0; i--)
    {
        arr[i].output();
        if (i != 0)
        {
            cout << "+";
        }
    }
}
polynomial polynomial::add (polynomial p1)
{
    polynomial result;
    if (p1.deg >= this->deg)
    {
        result.deg = p1.deg;
    }
    else
    {
        result.deg = this->deg;
    }
    int diff = abs(result.deg - p1.deg);
    for (int i = result.deg-1; i >= 0; i--)
    {
        if (diff > 0)
        {
            if (p1.deg > this->deg)
            {
                result.arr[i] = p1.arr[i]; // ERROR
            }
            else
            {
                result.arr[i] = this->arr[i]; // ERROR
            }
            diff--;
        }
        else
        {
            result.arr[i] = this->arr[i].add(p1.arr[i]);
        }
    }
    return result;
}


/*
#include "DaGiac.h"
#include <iostream>
using namespace std;

void dagiac::Nhap()
{
    cout << "Nhap so dinh: ";
    cin >> n;
    cout << "Nhap toa do cac dinh." << endl;
    arr = new diem[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].Nhap();
    }
}

void dagiac::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        arr[i].Xuat();
    }
}


dagiac dagiac::TinhTien(diem X)
{
    dagiac D = dagiac(n);
    for (int i = 0; i < n; i++)
    {
        D.arr[i] = arr[i].TinhTien(X);
    }
    return D;
}

dagiac dagiac::Zoom(float z)
{
    dagiac D = dagiac(n);
    for (int i = 0; i < n; i++)
    {
        D.arr[i] = arr[i].Zoom(z);
    }
    return D;
}

dagiac dagiac::Quay(double param)
{
    dagiac D = dagiac(n);
    for (int i = 0; i < n; i++)
    {
        D.arr[i] = arr[i].Quay(param);
    }
    return D;
}
*/

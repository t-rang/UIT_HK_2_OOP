#include "monomial.h"
#include <iostream>
using namespace std;

monomial::monomial(){};

monomial::monomial(int d)
{
    coef = 1;
    var = 1;
    deg = d;
}

void monomial::inputCoef()
{
    cout << "coef: ";
    cin >> coef;
}

void monomial::output()
{
    cout << coef << "x" << "^" << deg;
}
monomial monomial::add (monomial m1)
{
    monomial result;
    result.coef = this->coef + m1.coef;
    result.var = this->var;
    result.deg = this->deg;
    return result;
}

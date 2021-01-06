#pragma once
#include "monomial.h"

class polynomial
{
private:
    int deg;
    float var; 
    monomial* arr;
public:
    polynomial();
    void input();
    void output();
    polynomial add (polynomial p1);
    polynomial subtract (polynomial p1);
    polynomial multiply (polynomial p1);
    polynomial divide (polynomial p1);
};

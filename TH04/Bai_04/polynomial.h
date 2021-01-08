#pragma once
#include "monomial.h"

class polynomial
{
private:
    int deg;
    // float var; 
    monomial* arr;
public:
    polynomial();
    void input();
    void output();
    polynomial addWithSmallerDeg (polynomial p1);
    polynomial add (polynomial p1);
};

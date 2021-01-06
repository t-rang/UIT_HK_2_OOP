#pragma once

class monomial
{
private:
    float coef;
    float var;
    int deg;
public:
    monomial();
    monomial(int d);
    void inputCoef();
    void output();
    monomial add (monomial m1);
};

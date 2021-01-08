#pragma once

class monomial
{
private:
    float coef;
    int deg;
public:
    monomial();
    monomial(int d);
    void inputCoef();
    void output();
    monomial addSameDeg (monomial m1);
    void assign (monomial m1);
};

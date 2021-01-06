// Định nghĩa lớp biểu diễn khái niệm đa thức có bậc bất kỳ
// với các hàm thành phần và phép toán cần thiết.
// polynomial
// var
// deg
// coef
// polynomial (numOfMono, deg, monomial arr[], input, output, add, subtract, multiple, divide)

#include "monomial.h"
#include "polynomial.h"
#include <iostream>
using namespace std;

int main()
{
    polynomial p1;
    polynomial p2;
    p1.input();
    cout << endl;
    p1.output();
    cout << endl;
    p2.input();
    cout << endl;
    p2.output();
    cout << endl;
    polynomial addition = p1.add(p2);
    addition.output();
    return 1;
}

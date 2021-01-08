// Định nghĩa lớp biểu diễn khái niệm đa thức có bậc bất kỳ
// với các hàm thành phần và phép toán cần thiết.

#include "monomial.h"
#include "polynomial.h"
#include <iostream>
using namespace std;

int main()
{
    polynomial p1;
    polynomial p2;
    polynomial addition;
    p1.input();
    p1.output();
    cout << endl << endl;
    p2.input();
    p2.output();
    cout << endl << endl;
    addition = p1.add(p2);
    addition.output();
    return 1;
}

// Định nghĩa lớp dữ liệu CTimeSpan để biểu diễn khái niệm khoảng thời gian
// Hàm xuất, nhập
// Các phép toán cần thiết (+, -, ==, !=, >, >=, <, <=)

#include <iostream>
#include "timespan.h"
using namespace std;

int main()
{
    cout << "========================================" << endl;
    cout << "1. Khoi tao ts1 voi gio, phut, giay." << endl;
    class timespan ts1(1, 88, 77);
    cout << "Xuat ts1: ";
    ts1.output();

    cout << "\n========================================" << endl;
    cout << "2. Khoi tao ts2 voi gio va phut." << endl;
    class timespan ts2(1, 20);
    cout << "Xuat ts2: ";
    ts2.output();

    cout << "\n========================================" << endl;
    cout << "3. Khoi tao ts3 voi gio." << endl;
    class timespan ts3(1);
    cout << "Xuat ts3: ";
    ts3.output();

    cout << "\n========================================" << endl;
    cout << "4. Khoi tao ts4 bang cach sao chep ts3." << endl;
    class timespan ts4(ts3);
    cout << "Xuat ts4: ";
    ts4.output();

    cout << "\n========================================" << endl;
    cout << "5. Nhap ts5." << endl;
    class timespan ts5;
    ts5.input();
    cout << "Xuat ts5: ";
    ts5.output();
    
    cout << "\n========================================" << endl;
    cout << "6. Cong ts1 va ts2." << endl;
    timespan addition;
    addition = ts1.add(ts2);
    addition.output();
    
    cout << "\n========================================" << endl;
    cout << "7. Tru ts4 va ts5." << endl;
    timespan subtraction;
    subtraction = ts4.subtract(ts5);
    subtraction.output();
    
    cout << "\n========================================" << endl;
    cout << "8. So sanh ts1 va ts2 (== hay !=)." << endl;
    if (ts1.isEqual(ts2))
    {
        cout << "ts1 == ts2";
    }
    else if (ts1.isNotEqual(ts2))
    {
        cout << "ts1 != ts2";
    }
    
    cout << "\n========================================" << endl;
    cout << "9. So sanh ts3 va ts4 (<, = hay >)." << endl;
    if (ts3.isLessThan(ts4))
    {
        cout << "ts3 < ts4";
    }
    else if (ts3.isMoreThan(ts4))
    {
        cout << "ts3 > ts4";
    }
    else
    {
        cout << "ts3 = ts4";
    }
    
    cout << "\n========================================" << endl;
    cout << "10. So sanh ts4 va ts5 (<= hay >=)." << endl;
    if (ts4.isNotLessThan(ts5))
    {
        cout << "ts4 >= ts5";
    }
    else if (ts4.isNotMoreThan(ts5))
    {
        cout << "ts4 <= ts5";
    }
    
    return 0;
}

// Định nghĩa lớp dữ liệu CTimeSpan để biểu diễn khái niệm khoảng thời gian
// Hàm xuất, nhập
// Các phép toán cần thiết (+, -, ==, !=, >, >=, <, <=)

#pragma once

class timespan
{
private:
    int hour;
    int min;
    int sec;
public:
    timespan();
    timespan(int h, int m, int s);
    timespan(int h, int m);
    timespan(int h);
    timespan(timespan& ts);
    void input();
    void output();
    void reduce();
    timespan add(timespan ts1);
    timespan subtract(timespan ts1);
    int changeToSec();
    bool isEqual(timespan ts1); // ==
    bool isNotEqual(timespan ts1); // !=
    bool isLessThan(timespan ts1); // <
    bool isMoreThan(timespan ts1); // >
    bool isNotLessThan (timespan ts1); // >=
    bool isNotMoreThan (timespan ts1); // <=
};

#include "timespan.h"
#include <math.h>
#include <iostream>
using namespace std;

timespan::timespan() {};

timespan::timespan(int h, int m, int s)
{
    hour = h;
    min = m;
    sec = s;
}
timespan::timespan(int h, int m)
{
    hour = h;
    min = m;
    sec = 0;
}
timespan::timespan(int h)
{
    hour = h;
    min = 0;
    sec = 0;
}
timespan::timespan(timespan& ts)
{
    hour = ts.hour;
    min = ts.min;
    sec = ts.sec;
}
void timespan::input()
{
    cout << "Hour: ";
    cin >> hour;
    cout << "Minute: ";
    cin >> min;
    cout << "Second: ";
    cin >> sec;
}
void timespan::output()
{
    this->reduce();
    cout << hour << ":" << min << ":" << sec;
}
void timespan::reduce()
{
    if (sec >= 60)
    {
        min += sec / 60;
        sec = sec % 60;
    }
    if (min >= 60)
    {
        hour += min / 60;
        min = min % 60;
    }
}
timespan timespan::add(timespan ts1)
{
    timespan result;
    result.hour = hour + ts1.hour;
    result.min = min + ts1.min;
    result.sec = sec + ts1.sec;
    result.reduce();
    return result;
}
timespan timespan::subtract(timespan ts1)
{
    timespan result;
    result.hour = abs(hour - ts1.hour);
    result.min = abs(min - ts1.min);
    result.sec = abs(sec - ts1.sec);
    result.reduce();
    return result;
}
int timespan::changeToSec()
{
    return hour * 3600 + min * 60 + sec;
}
bool timespan::isEqual(timespan ts1) // ==
{
    if (this->changeToSec() != ts1.changeToSec())
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
bool timespan::isNotEqual(timespan ts1) // !=
{
    if (this->changeToSec() != ts1.changeToSec())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool timespan::isLessThan(timespan ts1) // <
{
    if (this->changeToSec() < ts1.changeToSec())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool timespan::isMoreThan(timespan ts1) // >
{
    if (this->changeToSec() > ts1.changeToSec())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool timespan::isNotLessThan(timespan ts1) // >=
{
    if (!this->isLessThan(ts1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool timespan::isNotMoreThan(timespan ts1) // <=
{
    if (!this->isMoreThan(ts1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

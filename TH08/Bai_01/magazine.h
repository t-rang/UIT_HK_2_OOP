#pragma once
#include <string>
#include <iostream>
#include "book.h"
using namespace std;

class magazine:
public book
{
protected:
    string theme;
public:
    magazine(){};
    void input()
    {
        book::input();
        cout << "Theme: ";
        cin.ignore();
        getline(cin, theme);
    };
    void output()
    {
        book::output();
        cout << "Theme: " << theme << endl;
    };
    int getType()
    {
        return 2;
    }
    ~magazine(){};
};

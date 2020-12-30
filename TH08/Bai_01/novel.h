#pragma once
#include <string>
#include <iostream>
#include "book.h"
using namespace std;

class novel:
public book
{
protected:
    string author;
    bool fictional;
public:
    novel(){};
    void input()
    {
        book::input();
        cout << "Author: ";
        cin.ignore();
        getline(cin, author);
        cout << "Fictional? (0. No 1. Yes): ";
        cin >> fictional;
    };
    void output()
    {
        book::output();
        cout << "Author: " << author << endl;
        cout << "Fictional: ";
        if (fictional==0)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
        cout << endl;
    };
    int getType()
    {
        return 1;
    }
    ~novel(){};
};

// novel (author, fictional / input, output)
#ifndef TH08_BOOK_H
#define TH08_BOOK_H
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
    nove(){};
    void input()
    {
        book::input();
        cout << "Author: ";
        cin.ignore();
        getline(cin, subject);
        cout << "Fictional? (0. No 1. Yes)";
        cin >> fictional;
    };
    void output()
    {
        book::output();
        cout << "Author: " << subject << endl;
        cout << "Fictional:";
        if (fictional==0)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
    };
    int getType()
    {
        return 1;
    }
    ~nove(){};
};
#endif //TH08_BOOK_H
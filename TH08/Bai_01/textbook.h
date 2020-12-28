#ifndef TH08_BOOK_H
#define TH08_BOOK_H
#include <string>
#include <iostream>
#include "book.h"
using namespace std;

class textbook:
public book 
{
protected:
    string subject;
public:
    textbook(){};
    void input()
    {
        book::input();
        cout << "Subject: ";
        cin.ignore();
        getline(cin, subject);
    };
    void output()
    {
        book::output();
        cout << "Subject: " << subject << endl;
    };
    int getType()
    {
        return 0;
    }
    ~textbook(){};
};
#endif //TH08_BOOK_H
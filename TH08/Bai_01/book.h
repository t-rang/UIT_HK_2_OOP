#ifndef TH08_BOOK_H
#define TH08_BOOK_H
#include <string>
#include <iostream>
using namespace std;

class book
{
protected:
    string title;
    int year;
    int type;
public:
    book(){};
    book(book& b)
    {
        title = b.title;
        year = b.year;
        type = b.type;
    };
    virtual void input()
    {
        cout << "Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Published in: ";
        cin >> year;
    };
    virtual void output()
    {
        cout << "Title: " << title << endl;
        cout << "Published in: " << year << endl;
    };
    virtual int getType()
    {
        return 99;
    }
    ~book(){};
};
#endif //TH08_BOOK_H

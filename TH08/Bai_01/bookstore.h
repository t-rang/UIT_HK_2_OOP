#include "book.h"
#include "textbook.h"
#include "novel.h"
#include "magazine.h"
#include <vector>
#include <iostream>
using namespace std;

class bookstore
{
private:
    int numOfBooks;
    vector<book*> books;
public:
    bookstore(){};
    void input()
    {
        cout << "Number of books: ";
        cin >> numOfBooks;
        int flag;
        cout << "Select type of book: 0. Textbook 1. Novel 2. Magazine" << endl;
        for (int i = 0; i < numOfBooks; i++)
        {
            cout << "Book type (0, 1, 2): ";
            cin >> flag;
            switch (flag)
            {
                case 0:
                {
                    book* tb = new textbook();
                    books.push_back(tb);
                    books[i]->input();
                    break;
                }
                case 1:
                {
                    book* tb = new novel();
                    books.push_back(tb);
                    books[i]->input();
                    break;
                }
                case 2:
                {
                    book* tb = new magazine();
                    books.push_back(tb);
                    books[i]->input();
                    break;
                }
            }
        }
    };
    void output()
    {
        for (int i = 0; i < numOfBooks; i++)
        {
            books[i]->output();
        }
    }
    void countBooksPerType()
    {
        int textbookCount = 0;
        int novelCount = 0;
        int magazineCount = 0;
        int flag;
        for (int i = 0; i < numOfBooks; i++)
        {
            flag = books[i]->getType();
            switch (flag)
            {
                case 0:
                {
                    textbookCount++;
                    break;
                }
                case 1:
                {
                    novelCount++;
                    break;
                }
                case 2:
                {
                    magazineCount++;
                    break;
                }
            }
        }
        cout << "Textbook: " << textbookCount << endl;
        cout << "Novel: " << novelCount << endl;
        cout << "Magazine: " << magazineCount << endl;
    }
    ~bookstore(){};    
};

// Xây dựng các loại đối tượng sách, sách giáo khoa, tiểu thuyết, tạp chí.
// Viết chương trình cho phép quản lý một danh sách các loại đối tượng kể trên.
// book (title, year, type / input, output)
// textbook (subject / input, output)
// novel (author, fictional / input, output)
// magazine (theme / input, output)
// bookstore (n, vector / input, output, countType, add, remove)

#include "textbook.h"
#include "novel.h"
#include "magazine.h"
#include "bookstore.h"
#include <iostream>
using namespace std;

int main()
{
    bookstore b;
    cout << "\nInput books in bookstore." << endl;
    b.input();
    int numToAdd;
    cout << "How many books to add: ";
    cin >> numToAdd;
    b.addBooks(numToAdd);
    int numToRemove;
    cout << "How many books to remove (last in first out): ";
    cin >> numToRemove;
    b.removeBooks(numToRemove);
    cout << "\nOutput books in bookstore." << endl;
    b.output();
    cout << "\nCount books in bookstore per type." << endl;
    b.countBooksPerType();
    return 0;
}

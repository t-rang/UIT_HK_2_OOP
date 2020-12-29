#include "book.h"
#include "textbook.h"
#include "novel.h"
#include "magazine.h"
#include <vector>

class bookstore
{
private:
    int numOfBooks;
    vector<book> books;
public:
    bookstore(){};
    void input()
    {
        int flag;
        cout << "Select type of book: 0. Textbook 1. Novel 2. Magazine" << endl;
        for (int i = 0; i < numOfBooks; i++)
        {
            cout << "Book type (0, 1, 2): ";
            switch (flag)
                case 0:
                {
                    textbook 
                }
            books.push_back()
            
        }
        
    };
    ~bookstore(){};
    
};
// Xây dựng các loại đối tượng sách, sách giáo khoa, tiểu thuyết, tạp chí.
// Viết chương trình cho phép quản lý một danh sách các loại đối tượng kể trên.

// book (title, year, type / input, output)

// textbook (subject / input, output)
// novel (author, fictional / input, output)
// magazine (theme / input, output)
// bookstore (n, vector / input, output, countType, add, remove)



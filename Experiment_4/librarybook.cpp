#include <iostream>
using namespace std;

class LibraryBook
{
private:
    string title;
    string author;
    bool issued;

public:
  
    LibraryBook(string t, string a)
    {
        title = t;
        author = a;
        issued = false;
    }

    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book issued successfully!" << endl;
        }
        else
        {
            cout << "Book is already issued." << endl;
        }
    }

    
    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book returned successfully!" << endl;
        }
        else
        {
            cout << "Book is already available." << endl;
        }
    }

  
    void display()
    {
        cout << "\nBook Title : " << title << endl;
        cout << "Author     : " << author << endl;
        cout << "Status     : " << (issued ? "Issued" : "Available") << endl;
    }
};

int main()
{
    LibraryBook book("The Alchemist", "Paulo Coelho");

    book.display();

    book.issueBook();
    book.display();

    book.returnBook();
    book.display();

    return 0;
}
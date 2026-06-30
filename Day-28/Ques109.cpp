#include <iostream>
using namespace std;

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {

    Book b;

    cout << "Enter Book ID: ";
    cin >> b.id;

    cout << "Enter Book Title: ";
    cin >> b.title;

    cout << "Enter Author Name: ";
    cin >> b.author;

    cout << "\n----- Library Record -----\n";
    cout << "Book ID : " << b.id << endl;
    cout << "Title   : " << b.title << endl;
    cout << "Author  : " << b.author << endl;

    return 0;
}
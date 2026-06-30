#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of books: ";
    cin >> n;

    int id[100];
    char title[100][50];
    char author[100][50];

    for (int i = 0; i < n; i++) {

        cout << "\nBook " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> id[i];

        cout << "Title: ";
        cin >> title[i];

        cout << "Author: ";
        cin >> author[i];
    }

    cout << "\n----- Library -----\n";

    for (int i = 0; i < n; i++) {
        cout << "Book ID : " << id[i] << endl;
        cout << "Title   : " << title[i] << endl;
        cout << "Author  : " << author[i] << endl << endl;
    }

    return 0;
}
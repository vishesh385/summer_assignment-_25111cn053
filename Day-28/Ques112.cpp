#include <iostream>
using namespace std;

struct Contact {
    char name[50];
    long long mobile;
};

int main() {

    Contact c;

    cout << "Enter Name: ";
    cin >> c.name;

    cout << "Enter Mobile Number: ";
    cin >> c.mobile;

    cout << "\n----- Contact Details -----\n";
    cout << "Name   : " << c.name << endl;
    cout << "Mobile : " << c.mobile << endl;

    return 0;
}
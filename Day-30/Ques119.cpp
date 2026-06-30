#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int id[100];
    char name[100][50];
    float salary[100];

    for (int i = 0; i < n; i++) {

        cout << "\nEmployee " << i + 1 << endl;

        cout << "ID: ";
        cin >> id[i];

        cout << "Name: ";
        cin >> name[i];

        cout << "Salary: ";
        cin >> salary[i];
    }

    cout << "\n----- Employee Details -----\n";

    for (int i = 0; i < n; i++) {
        cout << "ID     : " << id[i] << endl;
        cout << "Name   : " << name[i] << endl;
        cout << "Salary : " << salary[i] << endl << endl;
    }

    return 0;
}
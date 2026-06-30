#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int roll[100];
    char name[100][50];
    float marks[100];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll: ";
        cin >> roll[i];

        cout << "Name: ";
        cin >> name[i];

        cout << "Marks: ";
        cin >> marks[i];
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < n; i++) {
        cout << "Roll : " << roll[i] << endl;
        cout << "Name : " << name[i] << endl;
        cout << "Marks: " << marks[i] << endl << endl;
    }

    return 0;
}
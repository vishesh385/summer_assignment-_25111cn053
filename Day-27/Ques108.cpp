#include <iostream>
using namespace std;

int main() {

    char name[50];
    int roll;
    float eng, maths, science, total, percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter English Marks: ";
    cin >> eng;

    cout << "Enter Maths Marks: ";
    cin >> maths;

    cout << "Enter Science Marks: ";
    cin >> science;

    total = eng + maths + science;
    percentage = total / 3;

    cout << "\n--------- MARKSHEET ---------\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << roll << endl;
    cout << "English    : " << eng << endl;
    cout << "Maths      : " << maths << endl;
    cout << "Science    : " << science << endl;
    cout << "Total      : " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade : A+";
    else if (percentage >= 80)
        cout << "Grade : A";
    else if (percentage >= 70)
        cout << "Grade : B";
    else if (percentage >= 60)
        cout << "Grade : C";
    else if (percentage >= 40)
        cout << "Grade : D";
    else
        cout << "Grade : Fail";

    return 0;
}
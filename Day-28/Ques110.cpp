#include <iostream>
using namespace std;

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {

    Bank b;
    int choice;
    float amount;

    cout << "Enter Account Number: ";
    cin >> b.accNo;

    cout << "Enter Name: ";
    cin >> b.name;

    cout << "Enter Initial Balance: ";
    cin >> b.balance;

    do {

        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Check Balance";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter Amount: ";
            cin >> amount;
            b.balance += amount;
            break;

        case 2:
            cout << "Enter Amount: ";
            cin >> amount;

            if(amount <= b.balance)
                b.balance -= amount;
            else
                cout << "Insufficient Balance\n";
            break;

        case 3:
            cout << "Balance = " << b.balance << endl;
            break;

        case 4:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while(choice != 4);

    return 0;
}
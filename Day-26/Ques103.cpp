#include <iostream>
using namespace std;

int main() {

    int balance = 10000;
    int choice, amount;

    do {

        cout << "\n1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Balance = " << balance << endl;
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            balance += amount;
            cout << "Amount Deposited\n";
            break;

        case 3:
            cout << "Enter amount: ";
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << "Amount Withdrawn\n";
            } else {
                cout << "Insufficient Balance\n";
            }
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}
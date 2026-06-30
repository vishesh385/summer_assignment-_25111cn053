#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str[100];
    int choice;

    cout << "Enter String: ";
    cin >> str;

    do {

        cout << "\n1. Length";
        cout << "\n2. Reverse";
        cout << "\n3. Uppercase";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Length = " << strlen(str);
            break;

        case 2:
            for (int i = strlen(str) - 1; i >= 0; i--)
                cout << str[i];
            break;

        case 3:
            for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            cout << str;
            break;

        case 4:
            cout << "Exit";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}
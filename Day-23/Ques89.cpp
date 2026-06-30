//Write a program to Find first non-repeating character.
 



#include <iostream>
using namespace std;

int main() {

    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {

        int count = 0;

        for (int j = 0; j < length; j++) {

            if (str[i] == str[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << "First non-repeating character = " << str[i];
            return 0;
        }
    }

    cout << "No non-repeating character found.";

    return 0;
}
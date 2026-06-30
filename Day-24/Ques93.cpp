#include <iostream>
using namespace std;

int main() {

    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    int len1 = 0, len2 = 0;

    while (str1[len1] != '\0')
        len1++;

    while (str2[len2] != '\0')
        len2++;

    if (len1 != len2) {
        cout << "Not Rotation";
        return 0;
    }

    for (int k = 0; k < len1; k++) {

        // Left Rotate
        char first = str1[0];

        for (int i = 0; i < len1 - 1; i++) {
            str1[i] = str1[i + 1];
        }

        str1[len1 - 1] = first;

        // Compare
        bool same = true;

        for (int i = 0; i < len1; i++) {
            if (str1[i] != str2[i]) {
                same = false;
                break;
            }
        }

        if (same) {
            cout << "Rotation";
            return 0;
        }
    }

    cout << "Not Rotation";

    return 0;
}
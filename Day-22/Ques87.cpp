#include <iostream>
using namespace std;

void CountFrequency(char str[], int length) {

    for (int i = 0; i < length; i++) {

        if (str[i] == '#') {
            continue;
        }

        char ch = str[i];
        int count = 0;

        for (int j = 0; j < length; j++) {
            if (ch == str[j]) {
                count++;
                str[j] = '#';
            }
        }

        cout << ch << " -> " << count << endl;
    }
}

int main() {

    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin >> str;

    while (str[length] != '\0') {
        length++;
    }

    CountFrequency(str, length);

    return 0;
}
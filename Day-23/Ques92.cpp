#include<iostream>
using namespace std;

int main() {

    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    int length = 0;

    while(str[length] != '\0')
        length++;

    int maxCount = 0;
    char maxChar;

    for(int i = 0; i < length; i++) {

        if(str[i] == '#')
            continue;

        char ch = str[i];
        int count = 0;

        for(int j = 0; j < length; j++) {

            if(ch == str[j]) {
                count++;
                str[j] = '#';
            }
        }

        if(count > maxCount) {
            maxCount = count;
            maxChar = ch;
        }
    }

    cout << "Maximum occurring character = " << maxChar << endl;
    cout << "Frequency = " << maxCount << endl;

    return 0;
}
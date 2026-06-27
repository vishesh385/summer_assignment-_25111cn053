#include<iostream>
using namespace std;

int main() {

    char str[100];
    int length = 0;

    cout << "Enter the string: ";
    cin >> str;

    while(str[length] != '\0') {
        length++;
    }

    for(int i = 0; i < length; i++) {

        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    cout << "Uppercase String: " << str;

    return 0;
}
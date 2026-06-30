#include <iostream>
using namespace std;

int main() {
    char str[100], word[100], longest[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    int i = 0, j = 0;
    int maxLength = 0;

    while (true) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j] = str[i];
            j++;
        } else {
            word[j] = '\0';

            if (j > maxLength) {
                maxLength = j;

                int k = 0;
                while (word[k] != '\0') {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }

            j = 0;

            if (str[i] == '\0')
                break;
        }

        i++;
    }

    cout << "Longest word: " << longest;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    int answer;
    int score = 0;

    cout << "Q1. Capital of India?\n";
    cout << "1. Delhi\n2. Mumbai\n3. Kolkata\n4. Chennai\n";
    cin >> answer;

    if (answer == 1)
        score++;

    cout << "\nQ2. 5 + 7 = ?\n";
    cout << "1. 10\n2. 11\n3. 12\n4. 13\n";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nQ3. C++ was developed by?\n";
    cout << "1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nYour Score = " << score << "/3";

    return 0;
}
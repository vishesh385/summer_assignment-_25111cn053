#include <iostream>
using namespace std;

int main() {

    int secret = 25;
    int guess;

    cout << "Guess the number (1-100):\n";

    do {
        cin >> guess;

        if (guess > secret)
            cout << "Too High\n";
        else if (guess < secret)
            cout << "Too Low\n";
        else
            cout << "Correct! You guessed it.\n";

    } while (guess != secret);

    return 0;
}
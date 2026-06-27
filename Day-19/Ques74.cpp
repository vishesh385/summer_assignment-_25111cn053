#include<iostream>
using namespace std;

int main() {
    int r, c;
    int arr1[100][100], arr2[100][100], sub[100][100];

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter first matrix:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr2[i][j];
        }
    }

    //subtraction'
    for(int  i = 0  ; i < r; i++){
        for(int j = 0 ; j < c; j++){
            sub[i][j] = arr1[i][j] - arr2[i][j];

        }
    }

    

    cout << "Sub of matrices:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
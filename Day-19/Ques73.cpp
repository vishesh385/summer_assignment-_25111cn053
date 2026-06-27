#include<iostream>
using namespace std;

int main() {
    int r, c;
    int arr1[100][100], arr2[100][100], sum[100][100];

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

    // Addition
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Sum of matrices:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
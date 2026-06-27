#include<iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int arr1[100][100], arr2[100][100], arr3[100][100];

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Matrix multiplication is possible only if c1 == r2
    if(c1 != r2) {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    cout << "Enter first matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter second matrix:\n";
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> arr2[i][j];
        }
    }

    // Matrix Multiplication
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            arr3[i][j] = 0;

            for(int k = 0; k < c1; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "Resultant Matrix:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
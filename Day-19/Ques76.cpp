#include<iostream>
using namespace std;

int main() {
    int r, c;
    int arr[100][100], diagonalsum=0;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter  matrix:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
           if(i == j){
            diagonalsum = diagonalsum +arr[i][j]; 
           }
        }
    }
    
        cout<<" "<<diagonalsum<<endl;   
     
            



}

   

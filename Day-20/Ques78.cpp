#include<iostream>
using namespace std;

bool isSymmetric(int arr[][100],int r, int c ){
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
           if(arr[i][j] != arr[j][i] ){
            return false;
           }
      
        }
    }
    return true;

}




int main() {
    int r,c;
    int arr[100][100];

    cout << "Enter rows and columns of  matrix: ";
    cin >> r >> c;



    cout << "Enter elements in matrix:\n";
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    isSymmetric(arr,r,c);
    cout<<" "<<isSymmetric(arr,r,c)<<endl;
}
     
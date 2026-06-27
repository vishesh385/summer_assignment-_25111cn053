#include<iostream>
using namespace std;


int main(){

    int r,c,arr[100][100];
    int i,j;
  

    cout<<"enter the number of rows and columns"<<endl;
    cin>>r>>c;

    cout<<"enter numbers"<<endl;

    for (i = 0 ; i < r ; i++){

    for( j = 0 ; j < c; j++){
        cin>>arr[i][j];
    }
}
for(j = 0 ;j< r ;j++){
    int sum = 0;
    for(i = 0; i < c; i++){
        sum = sum + arr[i][j];
    }
    cout<<"col sum is : "<<sum<<endl;
}





 


}
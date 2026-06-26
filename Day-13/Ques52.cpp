//Write a program to Count even and odd elements

#include<iostream>
using namespace std;

int main(){
    int arr[100],n,i,even =0,odd =0;
    cout<<"enter the no of elements in an aarray"<<endl;
    cin>>n;
    for( i = 0 ; i< n  ;i++){
        cin>>arr[i];
    }

    for( i = 0 ; i < n; i++ ){
        if(arr[i] % 2 == 0){
            even++;

        }
        else{
            odd++;
        }
    }
        cout << "Number of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd << endl;




}

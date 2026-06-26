#include<iostream>
using namespace std;

void MissingNumber(int arr[], int n){
    int ans =0;
    for(int i = 0  ; i< n  ;i++){
        ans = ans ^ arr[i];
    }

    for(int j = 1  ;j<= n+1 ;j++){
        ans = ans ^ j;
    }
    cout<<"MISSING NO IS : "<<ans<<endl;
    
}


int main(){


    int i,n,arr[100];
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;




    for(i=0;i<n;i++){
        cin>>arr[i];
    }
  MissingNumber(arr,n);


   
    
}
#include<iostream>
using namespace std;


void rotateleft(int arr[], int n){
   int temp = arr[0];
   for(int i =0; i < n -1; i++){
    arr[i] = arr[i+1];

   }
   arr[n-1] = temp;
}  

int main(){
    int i ,n,arr[100];
    cout<<"enter the no of element in the array";
    cin>>n;


    for(i = 0 ; i< n ;i++){
        cin>>arr[i];
    }



    rotateleft(arr,n);
    cout<<"after rotation at left"<<endl;

      for(i = 0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }


    

    
}
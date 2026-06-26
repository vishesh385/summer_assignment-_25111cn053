#include<iostream>
using namespace std;


void rotateright(int arr[], int n){
   int temp = arr[n-1];
   for(int i =n-1; i >0; i--){
    arr[i] = arr[i-1];

   }
   arr[0] = temp;
}  

int main(){
    int i ,n,arr[100];
    cout<<"enter the no of element in the array";
    cin>>n;


    for(i = 0 ; i< n ;i++){
        cin>>arr[i];
    }



    rotateright(arr,n);
    cout<<"after rotation at right"<<endl;

      for(i = 0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }


    

    
}
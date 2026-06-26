#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i = 0 ; i<n; i++ ){
        cout<<arr[i]<<" ";
        
    }
    
}

int main(){
    int n,arr[100],i;
    cout<<"ENTER THE NO OF ELEMENTS IN AN ARRAY";
    cin>>n;

    cout<<"enter the elements";
    for(i = 0 ; i<n; i++ ){
        cin>>arr[i];
    }

   printarray(arr,n);


}
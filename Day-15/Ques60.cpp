#include<iostream>
using namespace std;

void moveZeros(int arr[],int n){
   int nonzero = 0;
   for(int i = 0  ;i< n ;i++){
    if(arr[i] != 0){
        swap(arr[i],arr[nonzero]);
       nonzero++;

    }
    
   }

}

int main(){


    int i,n,arr[100];
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;




    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeros(arr,n);
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
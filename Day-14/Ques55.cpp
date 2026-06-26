#include<iostream>
using namespace std;
int main(){
    int i,j,n,arr[100];
    cout<<"enter the size of array"<<endl;
    cin>>n;

    cout<<"enter the elements of array"<<endl;
    for(i = 0 ; i <n ;i++){
        cin>>arr[i];

    }

    for(i = 0 ; i < n -1 ; i++){

        for(j=0; j<n-i-1 ;j++){

            if(arr[j]>arr[j+1]){

            swap(arr[j],arr[j+1]);
        }


    }
}
    
    cout<<"the second largest element is : "<<arr[n-2]<<endl;
}

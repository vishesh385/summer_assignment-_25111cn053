#include<iostream>
using namespace std;

int main(){
    int i,j,n,key,count=0,arr[100];
    cout<<"enter the number of  elements in the array "<<endl;
    cin>>n;

    for(int i = 0 ; i < n  ;i++){

     cin>>arr[i];

    }
    cout<<"enter the element whose freq is to be searched "<<endl;
    cin>>key;

    for(int i = 0 ; i< n ;i++){
        if(arr[i]== key){
            count++;
        }
    }
    cout<<"the frequency of the key element is : "<<count<<endl;



}


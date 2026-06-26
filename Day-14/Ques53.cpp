#include<iostream>
using namespace std;

int main(){
    int i,n,element,arr[100],key;

    cout<<"enter the no of elements in an array"<<endl;
    cin>>n;

    for( i = 0 ; i< n; i++){
        cin>>arr[i];
    }

    cout<<"enter the element to be searched"<<endl;
    cin>>key;

    for(i = 0 ; i < n; i++){
        if(arr[i] == key){
            cout<<"element found"<<endl;
            return 0;
            
        }
    }
    cout<<"eleement not found"<<endl;











    
}
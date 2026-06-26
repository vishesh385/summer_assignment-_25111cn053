#include<iostream>
using namespace std;

int RemoveDuplicate(int arr[], int n ){
    int ans = 0, i;
    for(i = 0 ; i< n ;i++){
        ans = ans ^ arr[i];
    }
       for(int j = 0;j< n ;j++){
        ans = ans ^ j;
    }
    int duplicateelement = ans;

    for(i = 0  ; i< n ;i ++){
        if(arr[i] != duplicateelement){
            cout<<arr[i];

        }
    }
    
}


int main(){


    int i,n,arr[100];
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;



cout<<"enter the elements"<<endl;
    for (i=0;i<n;i++){
        cin>>arr[i];
    }



    RemoveDuplicate(arr,n );

   
    
}

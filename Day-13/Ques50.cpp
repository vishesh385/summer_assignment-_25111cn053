
#include<iostream>
using namespace std;



void printsum(int arr[],int n){
    int sum = 0;
    for(int i = 0  ; i < n ; i++ ){
    sum = sum + arr[i];
    }
    cout<<" the sum of array is :  "<<sum;
}

void printavg(int arr[],int n){
    int sum = 0;
    int ans;
    for(int i = 0  ; i < n ; i++ ){
    sum = sum + arr[i];
    
    }
    ans = sum / n;
    cout<<" the avg of arry is :  "<<ans;
}





int main(){
    int n,arr[100],i;
    cout<<"ENTER THE NO OF ELEMENTS IN AN ARRAY";
    cin>>n;

    cout<<"enter the elements";
    for(i = 0 ; i<n; i++ ){
        cin>>arr[i];
    }
    printsum(arr,n);
    printavg(arr,n);

   

}
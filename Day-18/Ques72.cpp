#include<iostream>
using namespace std;

  

void BubbleSort(int arr[], int n){
for(int i = 0 ; i  < n - 1; i++){

    for(int j =0; j< n-i-1; j++){
        if(arr[j]<arr[j+1]){
        swap(arr[j],arr[j+1]);

    }

}

}
}
int main(){
     int i,j,n,arr[100];
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
     

    for( i = 0 ; i< n ;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n);

    cout<<"the sorted array in decending order is  : "<<endl;
    for(i = 0 ; i < n; i++){
        cout<<" "<<arr[i];
    }
}




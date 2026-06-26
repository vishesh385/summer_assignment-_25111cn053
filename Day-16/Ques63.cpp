#include<iostream>
using namespace std;


int PairSum(int arr[], int n,int s ){
    
    for(int i = 0 ; i< n ;i++){
        for(int j = i+1 ;j< n ; j++){
            if(arr[i]+arr[j] == s){
                cout<<arr[i]<<" "<<arr[j]<<endl;

            }
        }
    }
}





int main(){



    int i,n,arr[100];
    int s;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;

   
    cout<<"enter the elemnts"<<endl;
    for(int i = 0 ; i< n ; i++){

    cin>>arr[i];
    }

    cout<<"enter the sum of elements"<<endl;
    cin>>s;

    PairSum(arr,n,s);
    


}
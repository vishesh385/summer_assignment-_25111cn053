#include<iostream>
using namespace std;


void findduplicate(int arr[],int n){
    int ans = 0;
    for(int i = 0 ; i< n;i++){
        ans =ans ^ arr[i];

    }

   for(int j=1; j< n; j++){
    ans = ans ^ j;
          

   }
   

   cout<<" the duplicate element in the array is : "<<ans<<endl;
}

int main(){
    int n,i,arr[100];

    cout<<"enter the number of elemnts in the array"<<endl;
    cin>>n;

    for(i = 0 ; i<n;i++){

        cin>>arr[i];

    }


    findduplicate(arr,n);

}


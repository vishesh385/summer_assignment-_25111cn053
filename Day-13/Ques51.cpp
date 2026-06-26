#include<iostream>
using namespace std;

int max(int arr[],int n){
    int i;
   int  max= arr[0];
   for(i = 0 ; i<n; i++ ){

    if(arr[i]> max){

        max =arr[i];
    }

   }
   return max;



}


int min(int arr[],int n){
    int i;
   int  min= arr[0];
   for(i = 0 ; i<n; i++ ){

    if(arr[i] <min){

        min =arr[i];
    }

   }
   return min;
   
}
   
int main(){
    int arr[100],i,n;
    cout<<"enter the no of element in an array"<<endl;
    cin>>n; 
    for( i  = 0; i < n; i++){
        cin>>arr[i];
    }

    

    cout<<"the minimum element of the array is : "<<endl<<min(arr,n);
    cout<<" the maximum element of the array is:"<< max(arr,n);


}
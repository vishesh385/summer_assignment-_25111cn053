#include<iostream>
using namespace std;




void reverse(int arr[],int n){
    int s = 0 ;
    int e = n -1;

    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    

    
}
int main(){

    int i,n,arr[100];
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;




    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    cout<<"the reversed array is : "<<endl;
    
  for(i = 0 ; i<n ;i++ ){
    cout<<" "<<arr[i]<<endl;
  }

   

    
 

}
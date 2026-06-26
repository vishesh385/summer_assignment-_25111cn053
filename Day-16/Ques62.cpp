#include<iostream>
using namespace std;


int Maxfrequency(int arr[], int n){
     int maxcount = 0;
     int element;
    
    for(int i = 0 ; i< n ; i++){
        int count = 0;
       
         for(int j = 0 ; j< n ;j++){
            if(arr[i] == arr[j]){
                count++;
            }

         }
         if(count>maxcount){
            maxcount = count;
            element = arr[i];

         }


         
    }
    cout << "Element with maximum frequency is : "
         << element << endl;

    cout << "Frequency is : "
         << maxcount << endl;


}

int main(){
    int i,n,arr[100];
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;

   
    cout<<"enter the elemnts"<<endl;
    for(int i = 0 ; i< n ; i++){

    cin>>arr[i];
    }
    Maxfrequency(arr,n);


}
#include<iostream>
using namespace std;

int main(){
    int i,j,n,m,arr1[100],arr2[100],arr3[200];
    int k = 0;

    cout<<"enter the no of elements in the first array"<<endl;
    cin>>n;


    cout<<"enter the elements in the first array"<<endl;
    for(int i = 0 ; i < n  ;i++ ){
        cin>>arr1[i]; 
    }

     cout<<"enter the no of elements in the 2nd array"<<endl;
    cin>>m;

      cout<<"enter the elements in the 2nd array"<<endl;
    for(int j = 0 ; j < m  ;j++ ){
        cin>>arr2[j];

    }

    for( i = 0 ; i < n; i++ ){
        for( j = 0; j< m ;j++ ){
            if(arr1[i]  == arr2[j]){
                arr3[k++] = arr1[i];
                arr1[i] = -1;
                arr2[j] = -1;
                break;
            }
        }
    }
    cout<<"common element is : "<<endl;

    for(i = 0 ; i < k; i++ ){
        cout<<" "<<arr3[i];
    }




 
    }
    


    
    
                      
        
        
    


        



    





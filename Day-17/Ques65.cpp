#include<iostream>
using namespace std;

void MergeArray(int arr1[],int n,int arr2[],int m,int arr3[]){
  int i= 0,j = 0,k = 0;

  while(i<n && j<m){
    if(arr1[i]<arr2[j]){
      arr3[k] = arr1[i];
      i++;
      k++;
    }
    else{
      arr3[k] = arr2[j];
      k++;
      j++;
    }
  }

  while(i<n){
    arr3[k++] = arr1[i++];
  }

  while(j<m){
    arr3[k++] = arr2[j++];
  }

  
for(int i = 0; i < n + m; i++){
    cout << arr3[i] << " ";
}

  }


int main(){
    int arr1[100],arr2[100],arr3[100],m,n,i,j,k;

      cout<<"enter the number of elements in the array1"<<endl;
    cin>>n;
     cout<<"enter the number of elements in the array2"<<endl;
    cin>>m;



cout<<"enter the elements in array 1: "<<endl;
    for (i=0;i<n;i++){
        cin>>arr1[i];
    }

    cout<<"enter the elements in array 2: "<<endl;
    for (j=0;j<m;j++){
        cin>>arr2[j];
    }


  cout<<"the merged array is : "<<endl;
    MergeArray(arr1,n,arr2,m,arr3);

  
    








}



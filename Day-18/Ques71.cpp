  #include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start = 0;
int end = n -1;

int mid = start +(end - start)/2;

while(start<= end){
    if(arr[mid] == key){
        cout<<"element found at index"<<mid<<endl;
        return mid;
        
        


    }
    if(arr[mid] < key){
        start = mid +1;

    }
    else{
        end = mid -1;
    }


     mid = start +(end - start)/2;


}
return -1;





}



  
  
  
  int main(){
     int i,n,key,arr[100];
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
     

    for( i = 0 ; i< n ;i++){
        cin>>arr[i];
    }

    cout<<"enter the key element to be searched"<<endl;
    cin>> key;

    BinarySearch(arr,n,key);

    


    
   
}




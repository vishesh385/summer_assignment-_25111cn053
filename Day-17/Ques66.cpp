#include<iostream>
using namespace std;

int main(){
    int i,j,n,m,arr1[100],arr2[100],unionarray[200];
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

    }/// all eleemnts entered

    for( i = 0 ; i< n ;i++){
        unionarray[k] = arr1[i];
        k++;
    }

    for( i =0 ; i< m;i++){
        int found = 0;
        for(j =0 ; j< k;j++){
             if(unionarray[j] == arr2[i])
           {
             found=1;// element already  found in union array
             break;
           } 
           
        }
        if(found == 0){
            unionarray[k++] = arr2[i];
        }
    }

    cout<<"UNION ARRAY"<<endl;
    for( i = 0  ; i <k ;i++){
        cout<<" "<<unionarray[i];
    }
    
                      
        
        
    


        



    }





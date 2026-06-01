

// write a program to check the perfect number

#include<iostream>
using namespace std;

int main(){
    int i,n,sum =0;
    cout<<"enter the number:  "<<endl;
    cin>>n;

    for(i=1; i<n; i++){

        if(n % i== 0){
            sum = sum +i;

        }
    }
    if(sum == n){
            cout<<"no is perfect"<<endl;
        }
    else{
        cout<<"no is not perfect"<<endl;
    }

}
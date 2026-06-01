// write a program to print the factors of a no
#include<iostream>
using namespace std;

int main(){

    int i,n;
    
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<" the prime factors are " <<endl;

    for(i =1;i<n;i++){
        
        if(n % i == 0){
            
            cout<<" "<<i<<endl;
        }
    }
}
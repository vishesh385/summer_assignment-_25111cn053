#include<iostream>
using namespace std;

bool isprime(int n){
    int count =0;
    for( int i = 1 ; i <=n ;i++ ){
        if(n % i == 0){
            count++;   
        }

    }
    if(count ==2){
        return true;
    }
    else{
        return false;
    }
    

    
}

int main(){
    int n;
    cout<<"enter the no n "<<endl;
    cin>>n;

    if(isprime(n)){
        cout<<"prime no "<<endl;
    }
    else{
        cout<<"not a prime no"<<endl;
    }

}
#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"enter the number :"<<endl;
    cin>>n;
    int key= n;

     int reverse =0;
    int digit;
    

    while(n!=0){
        digit=n%10;
        reverse= reverse*10+digit;
        n=n/10;
}

if(key== reverse){
    cout<<"no is palindrome"<<endl;
}
else{
    cout<<"no is not palindrome"<<endl;
}
}
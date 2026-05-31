#include<iostream>
using namespace std;

int main(){
    int n;
    int reverse =0;
    int digit;
    cout<<"enter the number"<<endl;
    cin>>n;

    while(n!=0){
        digit=n%10;
        reverse= reverse*10+digit;
        n=n/10;

    }
    cout<<"reversed no is "<<reverse<<endl;
}
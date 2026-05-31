#include<iostream>
using namespace std;

int main(){
    int n;
    int digit,sum=0;
    cout<<"ENTER THE NO : "<<endl;
    cin>>n;

    while(n!=0){
        digit=n %10;
        sum=sum+digit;
        n=n/10;
        
    }

    cout<<"sum of digit of the number is : "<<sum<<endl;


}
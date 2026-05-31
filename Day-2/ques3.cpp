#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the digit"<<endl;

    cin>>n;

    int product=1;

    while(n!=0){
        int digit= n % 10;
         product= product *digit;
         n = n /10;
    }

    cout<<"the product of digit is : "<<product<<endl;


}
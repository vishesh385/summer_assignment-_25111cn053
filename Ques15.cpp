#include<iostream>
using namespace std;

int main(){
    int n,digit;


    cout<<" enter the number n"<<endl;

    cin>>n;

    int temp = n;


    int sum = 0;

    while( n!= 0){

        digit = n % 10;
        sum = sum + digit*digit*digit;
        n = n /10;


        

    }

    if(sum == temp )
    {
        cout<<"ARMSTRONG NO"<<endl;
    }

    else
    {
        cout<<"not a ARMSSTRONG NO"<<endl;
    }


}
/* write a program to print the multiplication table for of a given number*/\

#include<iostream>
using namespace std;

int main(){
    int i,n;

    cout<<" enter the number : "<<endl;
    cin>>n;
   int  product;

    for(i=0 ; i<=10 ; i++){
        product = n *i;
        cout<< "the multiplication table of n is: " << product<<endl;
    }



}
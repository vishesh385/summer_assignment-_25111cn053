#include<iostream>
using namespace std;


void fibonacci(int n){
    int num1 = 0;
int  num2 = 1;

for(int i = 0 ; i<=n ; i++){

    cout<<num1<<" ";
     int num3=  num1+num2;
     num1= num2;
     num2 = num3;

}


}
int main(){

    int num1,num2,num3;

    int n;
    cout<<"enter the no of terms of fibonacci";
    cin>>n;


    fibonacci(n);
  

    





}
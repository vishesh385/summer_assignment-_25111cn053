/*write a program to count the digits in a numbeer*/

#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<" ENTER THE number: "<<endl;
    cin >> n;
    
   int  count =0;

    while(n != 0){
       
        n = n/10;
        count ++;
    }
    cout<<"the no of digit is "<<count<<endl;







}
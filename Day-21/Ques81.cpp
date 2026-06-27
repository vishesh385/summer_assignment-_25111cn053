#include<iostream>
using namespace std;

int main(){
    char str[100];
    int length=0;
    
    cout<<"enter the string"<<endl;
    cin>>str;

    while(str[length] != '\0'){
        length++;
    }

    cout<<" length of string is : "<<length<<endl;



}
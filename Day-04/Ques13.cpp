#include<iostream>
using namespace std;


int main(){
    int a=0, b =1,c,i= 3,n;

    cout<<"enter the value of n"<<endl;
    cin>>n;

    cout<<" "<<a<<endl;
    cout<<" "<<b<<endl;

    while(i<=n){
        c = a+ b;
        cout<<" "<<c<<endl;
        a=b;
        b=c;
        i++;
    }
    

}


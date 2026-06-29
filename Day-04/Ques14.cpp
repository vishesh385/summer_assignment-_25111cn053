#include<iostream>
using namespace std;


int main(){
    int a=0, b =1,c,i= 3,n;

    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(n == 1) {

    cout<<" "<<a<<endl;
    return 0;
    }

    if(n == 2) {
    cout<<" "<<b<<endl;
    return 0;
    }

    while(i<=n){
        c = a+ b;
       
        a=b;
        b=c;
        i++;
    }
     cout<<" "<<c<<endl;
    

}


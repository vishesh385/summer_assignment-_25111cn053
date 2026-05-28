
/*write a program to find the factorial of a number*/
#include<iostream> 

using namespace std;

int main(){
    int i,n;

    cout<<" enter the value of n:"<<endl;

    cin>>n;
    int fac =1;

    for( i = 1; i<=n; i++){
        fac= fac*i;

    }
    cout<<" the factorial of n is : "<<fac<<endl;



}
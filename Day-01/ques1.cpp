/* write a program ti calculate the sum of first  N natural numbers*/



#include<iostream>
using namespace std;

int main(){
    int i,n,sum =  0;

    cout<<" ENTER THE VALUE OF N : "<<endl;
    cin >> n;

    for( i=0; i<=n; i++){
    
    sum = sum+i;

    }
    cout<<"SUM OF N NATURAL NUMBERS IS : "<< sum <<endl;


}



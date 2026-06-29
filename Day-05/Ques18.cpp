#include<iostream>
using namespace std;

int main(){
    int i,n;
    
    int sum =0;
    int digit;
    cout<<"enter the number "<<endl;
    cin >>n;
    int temp = n;

    while(n!=0){
        digit = n % 10;
        int fac=1;


        for(i =1; i<=digit; i++){
            
            fac = fac * i;


        }
         sum = sum + fac;

        n = n / 10;
        
    }
    if(sum == temp ){
        cout<<"strong number"<<endl;
    }
    else{
        cout<<" not a strong number"<<endl;
    }
   
    
}

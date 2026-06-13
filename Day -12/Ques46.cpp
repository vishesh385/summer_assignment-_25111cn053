#include<iostream>
using namespace std;

int armsstrong(int n){
    int digit;
    int sum =0;
    int ans;


    while(n!=0){
        digit = n %10;
        sum = sum + digit*digit*digit;
        n = n /10;
        ans = sum;


    }
    return ans;
    

}


int main(){
    int n;
    cout<<"enter the no"<<endl;
    cin>>n;
    int original = n;

   int ans = armsstrong(n);
   if(ans == original){
    cout<<"ARMSSTRONG NUMBER";
   }
   else{
    cout<<"NOT A ARMSSTRONG NO";
   }





}
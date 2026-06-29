#include<iostream>
using namespace std;

int reverse(int n){
     int ans;
     int reverse =0;

    while( n!= 0){
        int digit = n % 10;
        
       
        
         reverse  = (reverse *  10) +digit;
        n = n /10;
         ans = reverse;

    }
    return ans;
    


}
int main(){
    int n;
    cout<<"entr the number"<<endl;
    cin>>n;
    int original = n;

  int ans = reverse(n);

  if(ans == original){
    cout<<"palindrome"<<endl;
  }
  else{
    cout<<" not a palindrome"<<endl;
  }


}

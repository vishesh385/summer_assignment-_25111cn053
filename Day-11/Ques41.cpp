#include<iostream>

using namespace std;

int sum(int num1,int num2){

    int ans = num1 + num2;
     return ans;


}

void print(int ans){
    cout<<ans<<" ";
}
int main(){
    int num1,num2;

    cout<<"enter the value of num1"<<endl;
    cin>>num1;

    cout<<"enter the value of num2"<<endl;
    cin>>num2;

     int ans = sum(num1,num2);
     print(ans);



}
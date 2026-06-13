#include<iostream>
using namespace  std;

int maximum(int num1,int num2){
    if(num1>num2){
        int ans = num1;
        return ans;
    }
    else{
        int ans = num2;
        return ans;
    }
}

void print(int ans){
    cout<<ans<<" ";

}

int main(){
    int num1,num2;
    cout<<"enter the value of num1"<<endl;
    cin>>num1;

    cout<<"enter the vle of num2"<<endl;
    cin>>num2;


    int ans = maximum(num1,num2);
    print(ans);

}
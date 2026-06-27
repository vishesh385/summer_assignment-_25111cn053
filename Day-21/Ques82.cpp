#include<iostream>
using namespace std;

int main(){
    char str[100];
    int length = 0;

  
    
    cout<<"enter the string"<<endl;
    cin>>str;

    while(str[length] != '\0'){
        length++;
    

    }

    int start = 0;
    int end = length -1;

    while(start<end){
        swap(str[start++], str[end--]);
    }
    cout<<"Reversed String is :"<<endl;
    
        cout<<" "<<str;
    
}





    

   

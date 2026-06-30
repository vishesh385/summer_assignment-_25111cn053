#include<iostream>
using namespace std;




bool checkpalindrome(char str[],int length) {
    int start = 0;
    int end = length -1;

    while(start < end ){
       if(str[start] != str[end]){
        return false;
       }
       start++;
       end--;
     
      

        
    }
      return true;
    

    
}

 int main(){

    char str[100];
    int length = 0;

    cout<<"enter the character"<<endl;
    cin>>str;

    while(str[length] != 0){
        length++;
    }

    

    cout<<" palindrome or not : "<<checkpalindrome( str,length)<<endl;
    
}
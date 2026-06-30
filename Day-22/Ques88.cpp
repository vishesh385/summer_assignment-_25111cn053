#include<iostream>
using namespace std;

int main(){
    char str[100];

    cout<<"enter the character"<<endl;
    cin.getline(str,100);

    int j = 0 ;
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
       
    }
     str[j] = '\0';
    cout<<" "<<str<<endl;

}
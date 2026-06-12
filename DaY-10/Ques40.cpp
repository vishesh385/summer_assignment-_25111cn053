#include<iostream>
using namespace std;

int main(){
    int i,k,j,rows;
    cout<<"ENTER THE NO OF ROWS"<<endl;
    cin>>rows;

    for( i = 1 ; i<=rows;i++){

        //for space
        for(j = 1 ; j <= rows-i; j++ ){
            cout<<" ";
        }

         for(k = 1;k<= i; k++ ){
            cout<<char('A'+ k -1)<<" ";
        }
        for(k = i-1;k>= 1; k-- ){
            cout<<char('A'+ k -1)<<" ";
        }

        cout<<" "<<endl;
    }
}
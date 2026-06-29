#include<iostream>
using namespace std;

int main(){
    int i,star,space,rows;
    cout<<"ENTER THE NO OF ROWS"<<endl;
    cin>>rows;

    for( i = 1 ; i<=rows;i++){

        //for space
        for(space = 1 ; space <= rows-i; space++ ){
            cout<<" ";
        }

         for(star = 1 ; star <= 2*i-1; star++ ){
            cout<<"* ";
        }

        cout<<" "<<endl;
    }
}

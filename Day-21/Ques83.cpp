//Write a program to Count vowels and consonants


#include<iostream>
using namespace std;

int main(){
    char str[100];
    int length =0;
    char str1[100] ={'A','E','I','O','U','a','e','i','o','u'};
    int count =0;
    int vowel =0;
    int consonant=0;
    

    cout<<"enter the string"<<endl;
    cin>>str;

    while(str[length] != 0){
        length++;
    }



    for(int i = 0 ; i< length ; i++){
        int found =0;
        for(int j = 0 ; j< 10 ;j++){
            if(str[i] == str1[j]){
                vowel++;
                found =1;
                break;


            }
           
        }
        if(found ==0){
                consonant++;

            }

        }
        cout << "Number of vowels = " << vowel << endl;
        cout << "Number of consonants = " << consonant << endl;

        return 0;
         

    }





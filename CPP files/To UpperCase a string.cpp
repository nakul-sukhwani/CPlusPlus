#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void ToUpper(char word[], int n){
for(int i = 0 ; i<n ; i++){
    int ch = word[i];
    if (ch>='A' && ch<='Z'){
        continue;
    }
    else{
        word[i] = ch - 'a' + 'A';
    }
}

}

int main (){

       char word[] = "ApPle";
       ToUpper(word , strlen(word));
       cout<<word;

    return 0;
} 


    
   

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
 char arr[] = "RacecaR";
    int n = sizeof(arr) / sizeof(char);
    int i = 0, j = n - 2;
    while (i < j) {
        if(arr[i]!=arr[j]){
            cout<<"not valid Palindrome";
            return false;
            i++;
            j--;
        }
        cout<<"Valid Palindrome";
        return true;
    }
return 0;
       
} 


    
   

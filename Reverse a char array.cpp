#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
 char arr[] = "Nakul";
    int n = sizeof(arr) / sizeof(char);
    int i = 0, j = n - 2;
    while (i < j) {
        std::swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << arr << endl;
return 0;
       
} 


    
   

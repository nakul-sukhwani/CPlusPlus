#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int print_arr (int arr[], int n ){
      for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

int find_unique (int arr[], int n){
int i = 0;
int unique = 1;
int j = 1;
while (j<n){
    if(arr[j]==arr[j-1]){
        j++;
        continue;
    }
    else{
        arr[i+1]=arr[j];
        i++;
        j++;
        unique++;
    }
}print_arr(arr,n);

}
int main (){
// given sorted array - find unique elements 
// find using two pointer - algo apne hissab se use krte hai 

int arr []= {1,1,1,2,2,3,3,3,4,4};
int n = sizeof(arr)/sizeof(int);
find_unique(arr, n );

return 0; 
}
// time complexity - O(n) , space - zero 
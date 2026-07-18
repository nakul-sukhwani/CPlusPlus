#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int print_arr(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
int arr [] = {1,2,3,4,5,6};
int n = sizeof(arr)/sizeof(int);
for(int i = 0 ; i < n ; i = i+2){
    if (i+1<n){
    swap(arr[i], arr[i+1]);
    }
}
print_arr(arr,n);
    return 0;
}   
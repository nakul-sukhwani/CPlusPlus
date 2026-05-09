#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int print_arr(int arr[], int n ){
    for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

int insertion_sort(int arr[], int n ){
    for(int i = 1 ; i <n ; i++){
        int curr = arr[i];
        int prev = i-1;
        while (prev>=0 && arr[prev]>curr)
        {
           swap(arr[prev],arr[prev+1]);
           prev--;
        }
        arr[prev+1]=curr;
    }print_arr(arr,n);
}

int main (){
int nums [] = {5,4,1,3,2};
int n = sizeof(nums)/sizeof(int);
insertion_sort(nums,n);

return 0;
}
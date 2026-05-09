#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int print_arr(int arr[], int n ){
    for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int counting_sort(int arr[],int n){
    int freq[100000];
    int minVal = INT_MAX , maxVal= INT_MIN;
    for (int i = 0 ; i<n ;i++){
        freq[arr[i]]++;
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }
    for(int i = minVal, j = 0 ;i<=maxVal; i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    print_arr(arr,n);
}

int main (){
int nums [] = {1,4,1,3,2,4,3,7};
int n = sizeof(nums)/sizeof(int);
counting_sort(nums,n);

return 0;
}
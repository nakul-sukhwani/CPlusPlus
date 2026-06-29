#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int print_arr(int arr[], int n ){
    for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int selection_sort(int arr[], int n ){
    for(int i = 0 ; i<n-1 ; i++){
       int minIdx = i;
    //    loop to find min idx 
        for(int j= i+1 ; j<n ; j++){
            if(arr[j]<arr[minIdx]){
            minIdx = j; }
        }
        swap(arr[i],arr[minIdx]);
    }
print_arr(arr,n);

    
}


int main (){
int nums [] = {5,4,1,3,2};
int n = sizeof(nums)/sizeof(int);
selection_sort(nums,n);

return 0;
}
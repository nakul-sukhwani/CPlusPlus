#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int print_arr(int arr[], int n ){
    for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int bubble_sort (int arr[], int n){
    bool isSwap = false;
for (int i = 0 ; i<n-1 ; i++){
    for(int j = 0 ; j<n-i-1 ; j++){
    if(arr[j]>arr[j+1]){// agr yaha pe sign of inequality change krdo toh will become of descending order
        swap(arr[j],arr[j+1]);
        isSwap = true;
    }if(!isSwap){
        //array is already sorted
        return;
    }

}
}print_arr(arr,n);

}

int main (){
int nums [] = {5,4,1,3,2};
int n = sizeof(nums)/sizeof(int);
bubble_sort(nums,n);

return 0;
}
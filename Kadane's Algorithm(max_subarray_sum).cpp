#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// MAX sub Array sum - Bruteforce approach - sum of every subarray 
void max_subarray_sum(int *arr, int n ){
    int Currsum = 0;
    int maxsum = INT_MIN;

   for (int i = 0 ; i<n ;i++){
    Currsum += arr[i];
    maxsum = max(maxsum,Currsum);
    if(Currsum<0){
        Currsum=0;
    }
    
}
    cout<<"maximum subarray sum ="<<maxsum;
}
int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);
    max_subarray_sum(arr ,n );
    return 0;   
} 
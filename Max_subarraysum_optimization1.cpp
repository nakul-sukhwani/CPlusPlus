#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// MAX sub Array sum - Bruteforce approach - sum of every subarray 
void max_subarray_sum(int *arr, int n ){
    int maxsum = INT_MIN;
    for(int st = 0 ; st<n; st++){
        int currsum = 0;
        for(int end = st ; end<n ; end++){
            currsum += arr[end];
            maxsum = max(maxsum ,currsum);  
        }
        
    }
    cout<<"maximum subarray sum = "<<maxsum<<endl;
}
int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(int);
    max_subarray_sum(arr, n);
    return 0;   
} 
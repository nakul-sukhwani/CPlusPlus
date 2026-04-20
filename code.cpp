#include<iostream>
using namespace std;
//Array Part 2
// For Subarray , the n size will be sum of n natural numbers i.e n(n+1)/2
// will need Start point and end point to print the subarray
void print_subarray(int arr[], int n){
    for(int st = 0 ; st<n ; st++){
        for(int end = st ; end<n ;end++){
            for(int i = st ; i<=end ; i++){
                cout<<arr[i];
            }
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    print_subarray(arr,n);
    
    return 0;
}
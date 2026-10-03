#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
     void reverse(int arr[], int n){
        int i = 0 , j = n-1;
        while (i<j){

            swap(arr[i], arr[j]);
            i++ , j--;
        }

    }
};
int  main () {

    int arr[]= {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(int);
    Solution s;
    cout << s.reverse(arr, n) << endl;
}
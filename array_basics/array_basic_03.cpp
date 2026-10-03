#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        for(int i = 0 ; i < n-1 ; i++){
            if(arr[i]<=arr[i+1]){
                continue;
            }
            else{
                return false;
            }

        }
        return true;

    }
};

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};

    Solution s;

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << s.arraySortedOrNot(arr, n) << endl;
}
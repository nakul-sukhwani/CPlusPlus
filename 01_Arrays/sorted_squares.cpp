#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int print_arr (int arr[], int n ){
      for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        
        // 1. Separate negatives and positives
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        } // The loop MUST close here!

        // 2. Square both arrays
        for (int i = 0; i < neg.size(); i++) {
            neg[i] = neg[i] * neg[i];
        }
        for (int i = 0; i < pos.size(); i++) {
            pos[i] = pos[i] * pos[i];
        }

        // 3. Reverse the negatives array to make it sorted ascending
        reverse(neg.begin(), neg.end());

        // 4. Merge the two sorted arrays
        vector<int> res(nums.size());
        int i = 0, j = 0, id = 0;
        int n = neg.size();
        int p = pos.size();

        while (i < n && j < p) {
            if (neg[i] <= pos[j]) {
                res[id] = neg[i];
                i++;
            } else {
                res[ id] = pos[j];
                j++;
            }
            id++;
        }

        while (i < n) {
            res[id] = neg[i];
            id++;
            i++;
        }
        
        while (j < p) {
            res[id] = pos[j];
            id++;
            j++;
        }

        return res;
    }
};
}
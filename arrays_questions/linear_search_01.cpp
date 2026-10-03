#include <bits/stdc++.h>
using namespace std;

    }class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        //your code goes here
        for (int i = 0 ; i<nums.size() ; i++){
            if (nums[i] == target){
                return i;
            }

        }
        return -1;

};
int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int n =  nums.size();
    Solution s;
    cout<<s.linearSearch(nums, 6)<<endl;
}
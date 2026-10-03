#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int largest_element = nums[n-1];
        for (int i = n-1 ; i >= 0 ; i--){
            if(largest_element == nums[i]){
                continue;
            }
            if(nums[i]<largest_element){
                return nums[i];
            }
        }
        return -1;

    }
};

int main() {
    vector<int> nums{1,2,3,4,5,6,7,8,9};
    int n = nums.size();
    Solution s;
    cout<<s.secondLargestElement(nums)<<endl;
}
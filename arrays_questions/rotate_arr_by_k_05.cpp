#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotatebyk(vector<int>& nums, int k) {
        k = k % nums.size();
        if (k == 0) return;
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin()+k, nums.end());
        reverse(nums.begin(), nums.end());

    }

};
int main() {
    int k = 3;
    vector<int> nums{1,2,3,4,5,6,7,8,9};
    Solution s;
    s.rotatebyk(nums, k);
}
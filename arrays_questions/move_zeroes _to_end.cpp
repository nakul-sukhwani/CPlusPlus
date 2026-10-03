#include <bits/stdc++.h>
using namespace std;
int print_array(vector<int> nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        cout<<nums[i]<<" ";

    }
}
int main () {
    vector<int> nums ={0,1,4,0,5,2};
    int nonZero = 0;
    for (int j = 0 ; j < nums.size(); j++) {
        if (nums[j] != 0) {
            swap(nums[j], nums[nonZero]);
            nonZero++;
        }
    }
    print_array(nums, nums.size());
    return 0;
}

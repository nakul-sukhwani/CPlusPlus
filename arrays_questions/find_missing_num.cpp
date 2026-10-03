#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missing = 0; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(i != nums[i]){
                return i;
            }
            
        }return nums.size();
        
    }
};
int main (){
    vector<int> nums = {0, 2, 3, 1, 4};
    Solution s;
    cout<<s.missingNumber(nums);
}
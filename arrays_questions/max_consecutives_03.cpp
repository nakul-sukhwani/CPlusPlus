#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxcnt = 0;
        for(int i = 0 ; i <= nums.size()-1 ; i++){
            if(nums[i] == 1){
                cnt++;
                maxcnt = max(maxcnt,cnt);
            }
            else{
                cnt = 0;
            }
        }
        return maxcnt;


    }



};

int main() {
    vector<int> nums{0,0,0,1,1,1,0,0,1,1,1,1};
    Solution s;
    cout<<s.findMaxConsecutiveOnes(nums)<<endl;

}
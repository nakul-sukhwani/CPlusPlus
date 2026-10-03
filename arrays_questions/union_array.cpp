#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        for(int i = 0; i < nums1.size(); i++) {
            st.insert(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++) {
            st.insert(nums2[i]);
        }
        vector<int> ans;
        for(int k = 0; k < st.size(); k++){
            ans.push_back(k);
        }
        return ans;
    }
};
int main (){
    Solution s;
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {4, 5, 6, 7, 8};
    vector<int> ans = s.unionArray(nums1, nums2);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}

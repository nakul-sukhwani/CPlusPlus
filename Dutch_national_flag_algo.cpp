#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int print_arr (int arr[], int n ){
      for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0 , mid = 0 , high = n-1;
            while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            
            }
            else if (nums[mid] == 1 ){
                mid++; 

            }
            else if(nums[mid]==2){
                swap(nums[mid], nums[high]);
                high--;
            }
            }
            
        
    }
};
int main (){
    vector<int> nums = {2,0,2,1,1,0};
    Solution mysolution;
    mysolution.sortColors(nums);
    cout << "Sorted array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
} 


    
   

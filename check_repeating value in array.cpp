#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int check_repeat (int nums[], int n ){
    
    for(int i=0;i<n;i++){
        for(int j = i+1 ;j<n ;j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }return false;
}

int main (){
int nums [] = {1,2,2,3,444,1};
int n = sizeof(nums)/sizeof(int);
cout<<check_repeat(nums , n);

return 0;
}
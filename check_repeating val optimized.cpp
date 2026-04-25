#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int check_repeat (int nums[], int n ){
    sort(nums,nums+n);
    for(int i=0;i<n;i++){
       if(nums[i]==nums[i+1]){
       return true;
        }
    }return false;
}

int main (){
int nums [] = {1,2,2,3,444,1};
int n = sizeof(nums)/sizeof(int);
if(check_repeat(nums,n)){
    cout<<"repeating val found"<<endl;

}
else{
    cout<<"repeating val not found"<<endl;
}

return 0;
}
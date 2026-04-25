#include<iostream>
#include <bits/stdc++.h>
using namespace std;
// Trapping Rainwater 
int Trapped_water (int height[], int n){
    int left_max [20000];
    int right_max[20000];
    right_max[n-1]= height[n-1];
    left_max[0]= height[0];
    
    for(int i = 1 ; i<n; i++){
        left_max[i]=max(left_max[i-1],height[i-1]);
        
    }
        for(int i = n-2 ; i>=0; i--){
        right_max[i]=max(right_max[i+1],height[i+1]);
        
    }
    int watertrapped = 0;
    for(int i = 0 ; i<n ; i++){
        int currwater = min (left_max[i],right_max[i])-height[i];
        if(currwater>0){
            watertrapped += currwater;
        } 
    }
    cout<<"water trapped : "<<watertrapped<<endl;
    return watertrapped;
}
int main (){
int height [] = {4,2,0,6,3,2,5};
int n = sizeof(height)/sizeof(int);
Trapped_water(height,n);
return 0;
return 0;
}
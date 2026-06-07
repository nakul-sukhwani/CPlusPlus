#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool search_in_Sortedmatrix(int mat[][4], int n,int m, int target){
int i = 0 , j = m-1;
while(i<n && j >= 0){
    if(mat[i][j] == target){
        cout<<"key Found at = "<<i<<","<<j<<endl;
        return true;
    }
    else if(mat[i][j]> target){
        j--;
    }
    else{
        i++;
    }
}
cout<<"Key Not Found"<<endl;
}

int main (){
   int mat[4][4] = {
       {10,20,30,40},
       {15,25,35,45},
       {27,29,37,48},
       {32,33,39,50}
   };
    search_in_Sortedmatrix(mat , 4, 4, 38);

    return 0;
} 


    
   

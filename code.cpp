#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int print_arr (int arr[], int n ){
      for (int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
void Spiral_matrix(int arr[][4], int n, int m) {
    int srow = 0 , scol = 0 ;
    int erow = n-1 , ecol = m-1;
    while (srow <= erow && scol <= ecol) {
        //top
        for (int j = scol ; j<=ecol ; j++) {
            cout<<arr[srow][j]<<" ";
        }
        //Right
        for (int i = srow+1 ; i<=erow ; i++) {
            cout<<arr[i][ecol]<<" ";
        }
        //bottom
        for (int j = ecol-1 ; j>=scol ; j--) {
            if (srow==erow) { //yaha ye iss liye kiya to avoid the duplicate printing of middle row
                break;
            }
            cout<<arr[erow][j]<<" ";
        }
        //left
        for (int i = erow-1 ; i>=srow+1 ; i--) {
            if (scol==ecol) {//yaha ye iss liye kiya to avoid the duplicate printing of middle col
                break;
            }
            cout<<arr[i][scol]<<" ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    cout<<endl;

}

int main (){
   int mat[4][4] = {
       {1,2,3,4},
       {5,6,7,8},
       {9,10,11,12},
       {13,14,15,16}
   };
    Spiral_matrix( mat,4,4);

    return 0;
} 


    
   

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
    int rows, cols;
    cout<<"enter Rows : "; 
    cin>>rows;
    cout<<"enter Columns : ";
    cin>>cols;
    int* *matrix= new int*[rows];
    for(int i = 0 ;  i<rows ;i++){
        matrix[i]= new int [cols];
    }
    int x = 1;
    for(int i = 0 ; i<rows ; i++){
        for(int j = 0 ; j<cols ; j++){
            matrix[i][j]=x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
    }
   




    
   

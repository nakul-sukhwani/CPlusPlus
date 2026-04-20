#include <iostream>
#include<algorithm>
#include<climits>
using namespace std ;
// to sort using all four types of soting of given array {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
void print(int *arr , int n ){ 
for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<< " ";
}cout<<endl;
}
void reverse_print (int *arr , int n ){
    for (int i = n-1 ; i >= 0 ; i--){
        cout<<arr[i]<< " ";
    }cout<<endl;
}
//sorting using bubble sort 
void Bubble (int *arr , int n ){
    for (int i = 0 ; i < n-1 ; i++){
        for (int j = 0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){ 
                swap(arr[j] , arr[j+1]);
                
            }
        }
    }print(arr , n);
}
// sorting using selection sort
void selection(int *arr , int n ){  
    for (int i = 0 ; i<n-1 ; i++){
        int min_idx = i;
        for(int j = i+1  ; j < n ; j++){
            if (arr[j]< arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            swap(arr[i], arr[min_idx]);
        }   
    }print(arr , n);
}
// sorting using insertion sort 
void insertion_sort (int *arr , int n ){
    for(int i = 1 ; i < n ; i++){
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
    print(arr , n);
}

int main() {
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr)/sizeof(int);  
    insertion_sort(arr ,10);
    Bubble(arr , 10);
    selection(arr , 10);
    return 0;
}
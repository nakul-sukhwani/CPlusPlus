#include<iostream>
using namespace std;
    // arrays 
    void print_arr(int arr[], int n ){
        for (int i = 0 ; i<n ;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    int linear_search(int arr[], int n , int key){
    for(int i = 0 ; i < n ; i++){
        if (arr[i]==key){
            return i ;
        }
    }
    return -1;
}
int reverse_array (int arr[], int n ){//doesnt affect the orignal array 
    for (int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

int binary_search(int arr[], int n, int key ){
    int st = 0 , end = n-1;
    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    // int n;
    // cout<<"enter the length of array";
    // cin>>n;// this helps to dyanamically sizing the array at runtime 
    // int arr[n];
    // cout<<"Enter the elements of the array";
    // for(int i = 0; i<n;i++){
    //     cin>>arr[i];
    // }cout<<endl; //This loop helps to enter the elements of the array 
    //  for(int i = 0; i<n;i++){
    //     cout<<arr[i]<<' ';
    // }//this Helps to access the elements of the array 
    //PRACTICE QUESTION 1 -  To find the larget num in Array 
//     int array[]={5,4,3,9,2};
//     int n = sizeof(array)/sizeof(int);
//     int max = array[0];
//     for(int i = 0 ; i<n ; i++){
//         if(array[i]>max){
//             max = array[i];
//         }
//     }cout<<max<<endl;
// print_arr(array,n);
    // PRACTICE QUSETION - 2 Linear Search 
    // Given array {2,4,6,8,10,12,14,16} to search key - 10 
int array[]={2,4,6,8,10,12,14,16};
int n = sizeof(array)/sizeof(int);
// int st = 0 , end = n-1;
// while(st<end){
//     // int temp = array[st];
//     // array[st]=array[end];
//     // array[end]=temp;
//     // st++;
//     // end--;
// }
print_arr(array,n);
    return 0;
}

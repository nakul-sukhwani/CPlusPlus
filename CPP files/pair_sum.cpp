#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> arr, int target ){
    int st = 0, end = arr.size() - 1;
    int currSum = 0;
    vector<int> res;
    
    while(st < end){
        
        currSum = arr[st] + arr[end]; 
        
        if(currSum == target){
            res.push_back(st);
            res.push_back(end);
            return res;
        }
        else if(currSum > target){ 
            end--;
        }
        else{
            st++;
        }
    }
    return res; 
}

int main (){
    vector<int> vec1 = {2, 7, 11, 15};
    
   
    vector<int> vec = pairsum(vec1, 9); 
    
    
    cout << "Indices: ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    
    return 0;
}
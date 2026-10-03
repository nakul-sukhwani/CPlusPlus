#include <iostream>
using namespace std;
class Solution{
public:
    int countOdd(int arr[], int n){
        int cnt = 0;
        for(int i = 0 ; i< n  ; i++){
            if (arr[i] % 2 != 0){
                cnt += 1;
            }
        }
        return cnt;
    }
};

int main () {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    Solution s;
    cout << s.countOdd(arr, n) << endl;
    return 0;
}

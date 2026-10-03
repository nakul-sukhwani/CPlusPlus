#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        s += arr[i];
    }
    return s;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << sum(arr, n)<<"\n";
    return 0;
}
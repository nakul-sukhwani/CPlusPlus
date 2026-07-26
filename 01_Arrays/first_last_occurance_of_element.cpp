#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int firstOccurance(int arr[], int n, int key)
{
    int s = 0, e = n - 1, mid = s + (e - s) / 2, ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurance(int arr[], int n, int key)
{
    int s = 0, e = n - 1, mid = s + (e - s) / 2, ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << firstOccurance(arr, n, 3) << endl;
    cout << lastOccurance(arr, n, 3) << endl;
}
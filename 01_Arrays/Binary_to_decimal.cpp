#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// to convert any binary to decimal number system
int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + round(pow(2, i));
        } 
        n = n / 10;
        i++;
    }
    cout << "Answer = " << ans << endl;
    return 0;
}
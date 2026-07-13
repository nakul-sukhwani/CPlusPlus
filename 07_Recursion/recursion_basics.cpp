#include <iostream>
using namespace std;
int factorial(int n)
{
    // base case
    if (n == 0)
        return 1; // kya base case mei return kar rhe ho that is important
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}
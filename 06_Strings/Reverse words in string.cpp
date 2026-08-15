#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void print(string &s, int n)
{
    for (int i = 0; i < s.length() - 1; i++)
    {
        cout << s[i];
    }
}
void reverseString(string &s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}
void revWords(string &s, int n)
{
    n = s.length() - 1;
    int i = 0;
    reverseString(s);
    for (int j = 0; j <= n; j++)
    {
        if (j == n || s[j] == ' ')
        {
            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
        }
    }
}

int main()
{
    string s = "the sky is blue";
    int n = s.length() - 1;
    revWords(s, n);
    print(s, n);
    return 0;
}
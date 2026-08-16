#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int n = str.length() - 1;
    string res = "";
    for(int i = 0 ; i <= n ; i++){
        if(str[i] == ' '){
            res += "@40";
        }
        else {
            res += str[i];
        }
    }
    cout<<res<<endl;

    return 0;
}
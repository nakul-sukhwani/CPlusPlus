#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//BUY AND SELL STOCKS
// step 1 : Calculate best buy price 
// step 2 : Calculate profit and get -> max value of profit
void Buy_sell_stocks (int prices[], int n){
    int bestbuy [100000]; // hamara best buy is min. value of buying
    bestbuy[0] = INT_MAX;
    for(int i = 1 ; i<n ; i++){
        bestbuy[i] = min(bestbuy[i-1],prices[i-1]);
        
    }
    int max_profit = 0;
    for(int i = 0; i<n ; i++){ 
        int currProfit = prices[i]-bestbuy[i];
        max_profit = max(max_profit,currProfit);
    }

    cout<<"max profit : "<<max_profit<<endl;
}
int main (){
int prices[] = {7,1,5,3,6,4};
int n = sizeof(prices)/sizeof(int);
Buy_sell_stocks(prices,n);
return 0;
}
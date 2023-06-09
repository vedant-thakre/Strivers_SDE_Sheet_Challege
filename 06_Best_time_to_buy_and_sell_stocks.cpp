#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini = prices[0];
      int profit = 0;
      for(int i=0;i<prices.size();i++){
        int cost;
        cost = prices[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, prices[i]);
      }
      return profit;
}
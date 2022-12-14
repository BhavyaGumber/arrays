class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int min_ele = INT_MAX;
        int n=prices.size();
    int max_profit = 0;
    for(int i=0;i<n;i++){
        min_ele = min(min_ele, prices[i]);
        max_profit = max(max_profit, prices[i]-min_ele);
    }
        return max_profit;
        
    }
};

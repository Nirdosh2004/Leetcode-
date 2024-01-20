class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minPrice = prices[0];
        for(int i=1;i<prices.size();i++){
            profit = max(profit , prices[i] -  minPrice);
            minPrice = min(prices[i] , minPrice);
        }
        return profit;
    }
};

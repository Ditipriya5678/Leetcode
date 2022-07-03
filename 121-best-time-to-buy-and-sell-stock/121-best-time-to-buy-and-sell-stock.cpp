class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0, sell=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i] < prices[buy])
            {
                buy = i;
            }
            else
            {
                sell = max(sell, prices[i] - prices[buy]);
            }
        }
        return sell;
    }
};
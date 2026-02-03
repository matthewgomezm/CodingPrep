class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxProfit = 0;
       int buy = INT_MAX; // we dont know buy, so INT_MAX is buffer
       for(int i = 0; i < prices.size(); i++) // iterate through loop
       {
            if(prices[i] < buy) // this check makes buy the first index, since MAX_INT is large
                buy = prices[i];
            else if (prices[i] - buy > maxProfit)
            {
                maxProfit = prices[i] - buy;
            }
       }
    return maxProfit;
    }
};


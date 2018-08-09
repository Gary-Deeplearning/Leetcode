class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 贪心算法，后一天的股票价格比前一天的股票价格高，就进行一次买卖
        int max = 0;
        for (int i = 1;i < prices.size(); i++){
            int current = prices[i] - prices[i-1];
            if (current > 0)
                max += current;
        }
        return max;
    }
};
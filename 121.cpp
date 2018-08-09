class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxCur = 0, maxProfit = 0;
        
        for (int i = 1; i < prices.size(); i++){
            maxCur = max(0, maxCur += prices[i] - prices[i-1]);
            maxProfit = max(maxProfit, maxCur);
        }
        return maxProfit;
    }
};
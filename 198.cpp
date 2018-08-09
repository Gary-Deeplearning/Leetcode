class Solution {
public:
    int rob(vector<int>& nums) {
        // 动态规划(Dynamic Programming)
        if (nums.size() <= 1)
            return nums.empty() ? 0: nums[0];
        // 初始化dp[0], dp[1]
        vector<int> dp = {nums[0], max(nums[0], nums[1])};
        
        // 维护递推公式dp[i] = max(dp[i-1], nums[i]+dp[i-2])
        for (size_t i = 2; i < nums.size(); i++){
            dp.push_back(max(dp[i-1], nums[i]+dp[i-2]));
        }
        
        // 返回最后一个元素也即最大和
        return dp.back();
    }
};
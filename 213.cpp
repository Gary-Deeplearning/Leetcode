class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums.empty() ? 0 : nums[0];
        // 分两种情况
        // nums[0][n-2], nums[1][n-1];
        int size = nums.size();
        vector<int> dp1(size-1);
        vector<int> dp2(size);

        dp1[0] = nums[0];
        dp1[1] = max(nums[0], nums[1]);
        dp2[1] = nums[1];
        dp2[2] = max(nums[1], nums[2]);

        for (size_t i = 2; i < size - 1; ++i)
            dp1[i] = max(dp1[i - 1], nums[i] + dp1[i - 2]);

        for (size_t i = 3; i < size; ++i)
            dp2[i] = max(dp2[i - 1], nums[i] + dp2[i - 2]);

        return max(dp1.back(), dp2.back());
    }
};
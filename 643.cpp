class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.;
        if (nums.size() == k) {
            sum = accumulate(nums.begin(), nums.end(), 0)*1.0 / k;
            return sum;
        }
        double max = sum;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
            max = sum;
        }

        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            if (sum > max)
                max = sum;
        }
        return max*1.0 / k;
    }
};
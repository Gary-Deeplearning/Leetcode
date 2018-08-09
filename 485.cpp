class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0, Max = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                temp++;
            if (nums[i] == 0) {
                Max = max(temp, Max);
                temp = 0;
            }
        }
        Max = max(temp, Max);
        return Max;
    }
};
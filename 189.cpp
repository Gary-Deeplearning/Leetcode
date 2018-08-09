class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() == 0 || k % nums.size() == 0)
            return;
        int turns = k % nums.size();
        int middle = nums.size() - turns;
        reverse(nums.begin(), nums.begin() + middle);
        reverse(nums.begin() + middle , nums.end());
        reverse(nums.begin(), nums.end());
    }
};
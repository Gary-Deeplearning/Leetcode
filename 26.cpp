class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return 1;
        int last = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (last == nums[i]) {
                vector<int>::iterator iter = nums.begin() + i;
                nums.erase(iter);
                i -= 1;
            }
            else {
                last = nums[i];
            }
        }
        return nums.size();
    }
};
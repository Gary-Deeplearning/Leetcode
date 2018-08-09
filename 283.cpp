class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                vector<int>::iterator k = nums.begin() + i;
                nums.erase(k);
                i--;
                count++;
            }
        }
        for (int i = 0; i < count; i++)
            nums.push_back(0);
    }
};
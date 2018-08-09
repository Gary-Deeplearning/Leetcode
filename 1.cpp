class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int index = target - nums[i];
            if (m.count(index) && m[index] != i) {
                res.push_back(i);
                res.push_back(m[index]);
                break;
            }
        }
        return res;
    }
};
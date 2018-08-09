class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> result(nums.size());
        if (nums.size() == 0)
            return result;
        vector<int> temp = nums;
        sort(temp.begin(), temp.end(), greater<int>());

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == temp[j]) {
                    switch (j){
                    case 0:
                        result[i] = "Gold Medal";
                        break;
                    case 1:
                        result[i] = "Silver Medal";
                        break;
                    case 2:
                        result[i] = "Bronze Medal";
                        break;
                    default:
                        result[i] = to_string(j + 1);
                        break;
                    }
                    break;
                }
            }
        }
        return result;
    }
};
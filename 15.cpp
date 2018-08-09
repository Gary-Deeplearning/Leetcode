class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)	// 如果最小的数都大于0，可直接退出了
                break;
            if (i > 0 && nums[i - 1] == nums[i])		// 不要相同的数字
                continue;
            int target = 0 - nums[i];
            int p = i+1;
            int q = nums.size() - 1;
            while (p < q) {
                if (p == i)
                    p++;
                else if (q == i)
                    q--;
                if (nums[p] + nums[q] == target) {
                    // 加入
                    res.push_back({ nums[i], nums[p], nums[q] });
                    // 现在这一工作就是避免重复的结果
                    while (p < q && nums[p] == nums[p + 1])
                        p++;
                    while (p < q && nums[q] == nums[q - 1])
                        q--;
                    p++;
                    q--;
                }
                // 如果两和小于target， p指针向前一步
                else if (nums[p] + nums[q] < target)
                    p++;
                else   // 两和大于， q指针--；
                    q--;
            }
        }
        return res;
    }
};
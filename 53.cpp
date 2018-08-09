class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (!nums.size())
            return 0;
        int CurSum = 0;
        int maxSum = INT_MIN;
        
        for (int i = 0; i < nums.size(); i++){
            // 如果此时累加和比0还小且小于当前数组值
            // 还不如直接从的数组值为累加和的第一个值
            if (CurSum <=0 && CurSum < nums[i]) 
                CurSum = nums[i];
            // 如果此时累加和不小于0，那可直接加上下一个数组值
            else 
                CurSum += nums[i];
            
            // 如果当前累加和比之前累加和最大值的备份还要大
            // 则更新，以防止当前累加和加上一个负值而变小
            if (CurSum > maxSum)
                maxSum = CurSum;
        }
        return maxSum;
    }
};
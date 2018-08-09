class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // 返回两个和的差就是丢失的数值
        long long len=nums.size();
        long long sum=len*(len+1)/2,sum2=0;
        for(auto i:nums)
            sum2+=i;
        return sum-sum2;
    }
};
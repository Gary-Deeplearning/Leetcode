class NumArray {
public:
    
    vector<int> rangeSum;
    
    NumArray(vector<int> nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            rangeSum.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        return rangeSum[j] - rangeSum[i - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
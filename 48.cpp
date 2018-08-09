class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int index = 0;
        vector<int> nums(n*n);
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j >= 0; j--) {
                nums[index] = matrix[j][i];
                index++;
            }
        }
        index = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = nums[index];
                index++;
            }
        }
    }
};
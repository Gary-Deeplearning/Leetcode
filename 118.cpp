class Solution {
public:
    vector<vector<int>>	generate(int numRows) {
        vector<vector<int>> pascal(numRows);  // 定于numRows行的二维矩阵

        for (int i = 0;i < numRows; ++i){
            pascal[i].resize(i+1, 1);

            // 当i>1的时候，即已经来到了第三行
            if (i > 1) {
                for (int j = 1; j < i; ++j)
                    pascal[i][j] = pascal[i-1][j - 1] + pascal[i-1][j];
            }
        }
        return pascal;
    }
};
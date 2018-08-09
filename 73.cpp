class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstRow = false;
        bool firstCol = false;
        
        for (size_t i = 0; i < matrix.size(); ++i){
            for (size_t j = 0; j < matrix[0].size(); ++j){
                if (i != 0 && j != 0 && matrix[i][j] == 0){
                    matrix[i][0] = 0;   // 标注第i行等会要置零
                    matrix[0][j] = 0;   // 标注第j列等会要置零
                }else if(matrix[i][j] == 0){
                   if (!firstRow)
					    firstRow = i == 0 ? true : false;
				    if (!firstCol)
					    firstCol = j == 0 ? true : false;
                }
            }
        }
        // 这里将需要置零的行进行置零
        for (size_t i = 1; i < matrix.size(); ++i)
            if (!matrix[i][0])
                for (size_t j = 1; j < matrix[0].size(); ++j)
                    matrix[i][j] = 0;
        // 这里将需要置零的列进行置零
        for (size_t j = 1; j < matrix[0].size(); ++j)
            if (!matrix[0][j])
                for (size_t i = 0; i < matrix.size(); ++i)
                    matrix[i][j] = 0;
        // 这里将需要的置零的首行或首列进行置零
        for (size_t j = 0; firstRow && j < matrix[0].size(); ++j)
            matrix[0][j] = 0;
        for (size_t i = 0; firstCol && i < matrix.size(); ++i)
            matrix[i][0] = 0;
            
    }
};
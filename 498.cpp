class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (!matrix.size())
            return res;

        auto m = matrix.size() - 1;
        auto n = matrix[0].size() - 1;

        res.resize((m + 1) * (n + 1));
        res[0] = matrix[0][0];
        if (!m && !n)
            return res;
        auto k = 1;

        if (m == 0) {
            for (size_t j = 0; j <= n; ++j)
                res[j] = matrix[0][j];
            return res;
        }
        else if (n == 0) {
            for (size_t i = 0; i <= m; ++i)
                res[i] = matrix[i][0];
            return res;
        }
        // 从(0, 1)开始
        auto p = 0, q = 1;

        // flag=true: 行加一，列减一
        // flag=flase: 行减一， 列加一
        auto flag = true;
        while (true) {
            while (flag) {
                res[k] = matrix[p][q];
                k++;
                if (m == p) {  // 行到了末尾
                    q++;
                    break;
                }
                else if (q == 0) {		// 列到了末尾
                    p++;
                    break;
                }
                p++;
                q--;
            }
            while (!flag) {
                res[k] = matrix[p][q];
                k++;
                if (p == 0 && q == n) {
                    p++;
                    break;
                }
                else if (p == 0 && q != n) {
                    q++;
                    break;
                }
                else if (q == n) {
                    p++;
                    break;
                }
                p--;
                q++;
            }
            flag = !flag;
            if (p == m && q == n)
                break;
        }
        res[res.size() - 1] = matrix[p][q];

        return res;
    }
};
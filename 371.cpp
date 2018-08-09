class Solution {
public:
    int getSum(int a, int b) {
        int jw = a&b;
        int jg = a^b;
        while (jw)
        {
            int t_a = jg;
            int t_b = jw << 1;
            jw = t_a&t_b;
            jg = t_a^t_b;
        }
        return jg;
    }
};
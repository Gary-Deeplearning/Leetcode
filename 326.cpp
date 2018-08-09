class Solution {
public:
    bool isPowerOfThree(int n) {
        double tem = log10(n) / log10(3);
        return (tem - (int)(tem)) == 0?true:false;
    }
};
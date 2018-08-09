class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c < 0)
            return false;

        int k  = sqrt(c*1.0);
        int left = 0;
        int right = k;
        while(left <= right){
            int temp = left*left + right*right;
            if (temp == c)
                return true;
            else if(temp > c)
                right--;
            else
                left++;
        }
        return false;
    }
};
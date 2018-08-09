
class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num <= 0)
            return false;
        if (num == 1)
            return true;
        if (num % 4 != 0)
            return false;
        while (num >= 4) {
            if (num % 4 != 0)
                return false;
            num = num >> 1 >> 1;
            if (num == 1)
                return true;
        }
        return false;
    }
};
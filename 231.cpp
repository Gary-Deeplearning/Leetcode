class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
		    return false;
        if (n == 1)
            return true;
        if (n % 2 != 0)
            return false;
        while (n) {
            if (n % 2 != 0)
                return false;
            n = n >> 1;
            if (n == 1)
                return true;
        }
        return false;
    }
};
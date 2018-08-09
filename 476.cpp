class Solution {
public:
    int findComplement(int num) {
        bitset<32> i(num);
        int j = 31;
        for (; j>0; --j) {
            if (i[j] != 0)
                break;
        }
        for (; j >= 0; j--) {
            i.flip(j);
        }
        int r = i.to_ulong();
        
        return r;
    }
};
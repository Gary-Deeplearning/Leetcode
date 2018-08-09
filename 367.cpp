class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 0 || num == 1)
            return true;
        for(int i=1;num>0;i+=2) 
            num-=i;
        return 0 == num;
    }
};
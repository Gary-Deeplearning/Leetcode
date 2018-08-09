class Solution {
public:
    string convertToBase7(int num) {
        string res = "";
        bool positive = num > 0;
        if (num == 0)
            return to_string(num);
        else {
            while (num != 0) {
                res = to_string(abs(num % 7)) + res;
                num /= 7;
            }
        }
        return positive ? res : "-" + res;
}
};
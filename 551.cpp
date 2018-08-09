class Solution {
public:
    bool checkRecord(string s) {
        int Anum = 0;
        char last = s[0];

        if (last == 'A')
            Anum++;

        bool flag = false;
        for (int i = 1; i < s.size(); i++) {
            if (flag && s[i] == 'L')
                return false;
            else
                flag = false;
            if (s[i] == 'A') {
                Anum++;
                if (Anum > 1)
                    return false;
            }
            if (s[i] == 'L' && last == 'L')
                flag = true;
            last = s[i];
        }
        return true;
    }
};
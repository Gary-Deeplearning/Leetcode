class Solution {
public:
    string reverseString(string s) {
        string result = "";
        int j = s.size();
        for (int i = 0; i < s.size(); i++) {
            result += s[j-i-1];
        }
        return result;
}
};
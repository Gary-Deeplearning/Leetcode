class Solution {
public:
    bool isCapital(char c) {
        if (c>='A' && c<='Z') return true;
        else return false;
    }
    
    bool detectCapitalUse(string word) {
        if (word.size() == 1)
		return true;
        if (isCapital(word[0]) && isCapital(word[1])) {
            for (int i = 2; i < word.size(); i++)
                if (!isCapital(word[i]))
                    return false;
        }
        else if (isCapital(word[0]) && !isCapital(word[1])) {
            for (int i = 2; i < word.size(); i++)
                if (isCapital(word[i]))
                    return false;
        }
        else {
            for (int i = 1; i < word.size(); i++)
                if (isCapital(word[i]))
                    return false;
        }
        return true;
    }
};
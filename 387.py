
class Solution:
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) == 1:
            return 0;
        sett = set(s)
        
        word_dict = dict()
        for w in sett:
            c = s.count(w)
            word_dict[w] = c
        for i, w in enumerate(s):
            if (word_dict[w] == 1):
                return i
        return -1
        
        
class Solution:
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) != len(t):
            return False
        dict_s = dict()
        dict_t = dict()
        for ss in s:
            if ss not in dict_s:
                dict_s[ss] = 0
            else:
                dict_s[ss] += 1
        for tt in t:
            if tt not in dict_t:
                dict_t[tt] = 0
            else:
                dict_t[tt] += 1
        return dict_s == dict_t
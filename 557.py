class Solution:
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        str_split = s.split()
        S = ""
        for str in str_split:
            s = str[::-1]
            S += s + ' '
        S = S[:len(S) - 1]
        return S
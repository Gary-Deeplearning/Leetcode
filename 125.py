
class Solution:
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        ss = [i.lower() for i in s if i.isalnum()]
        return ss == ss[::-1]
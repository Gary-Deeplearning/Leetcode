class Solution:
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        if s == "":
            return 0
        wordlist = s.split(' ')
        if (len(wordlist) == 0):
            return 0
        else:
            for i in range(1, len(wordlist)+1):
                if len(wordlist[-i]) == 0:
                    continue
                else:
                    return len(wordlist[-i])
        return 0
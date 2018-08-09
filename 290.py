class Solution:
    def wordPattern(self, pattern, str):
        """
        :type pattern: str
        :type str: str
        :rtype: bool
        """
        wordlist = str.split(' ')
        if len(pattern) != len(wordlist) :
            return False
        else :
            pattern_map = dict() 
            for i in range(len(pattern)) :
                if pattern[i] not in pattern_map :
                    pattern_map[pattern[i]] = wordlist[i]
                else :
                    if pattern_map[pattern[i]] != wordlist[i] :
                        return False

            word_map = dict()
            for i in range(len(wordlist)) :
                if wordlist[i] not in word_map :
                    word_map[wordlist[i]] = pattern[i]
                else :
                    if word_map[wordlist[i]] != pattern[i] :
                        return False
        return True
        
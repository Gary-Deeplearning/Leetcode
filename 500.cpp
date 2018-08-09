class Solution:
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        r1 = ['q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P']
        r2 = ['a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L']
        r3 = ['z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M']
        
        result = []
        d1 = False
        d2 = False
        d3 = False
        
        for word in words:
            d1 = False
            d2 = False
            d3 = False
            flag = True
            for w in word:
                if w in r1:
                    d1 = True
                elif w in r2:
                    d2 = True
                elif w in r3:
                    d3 = True
                if (d1==True and d2 == True) or (d1==True and d3 == True) or (d2==True and d3 == True):
                    flag = False
                    break
            if flag:
                result.append(word)
        return result
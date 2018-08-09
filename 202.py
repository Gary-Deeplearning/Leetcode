class Solution:
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        result = set()
        while n != 1 and n not in result:
            result.add(n)
            Sum = 0
            while n:
                Sum += (n % 10)**2
                n //= 10
            n = Sum
        return n == 1
        
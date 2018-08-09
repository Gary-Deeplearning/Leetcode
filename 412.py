class Solution:
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        res = list()
        for i in range(n):
            k = i+1
            if (k % 3 == 0) and (k % 5 == 0):
                res.append('FizzBuzz')
            elif k % 3 == 0:
                res.append('Fizz')
            elif k % 5 == 0:
                res.append('Buzz')
            else:
                res.append(str(k))
        return res
        
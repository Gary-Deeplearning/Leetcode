
class Solution:
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        dic = {}
        ans = []
        for item in nums:
            if item in dic:
                dic[item] += 1
            else:
                dic[item] = 1
            if dic[item] == 2:
                ans.append(item)
                break
        n = len(nums)
        sub = (1+n)*n//2 - sum(nums)
        ans.append(ans[0]+sub)
        return ans
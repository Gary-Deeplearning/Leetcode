class Solution:
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        if len(nums) == 0 or len(nums) == 1:
            return nums
        result = set(nums)
        results = list()
        for num in result:
            if nums.count(num) > len(nums)/3:
                results.append(num)
        return results
        
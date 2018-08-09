class Solution:
    def matrixReshape(self, nums, r, c):
        """
        :type nums: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        origin_r = len(nums)
        origin_c = len(nums[0])

        if origin_r * origin_c == r * c:
            nums = [col for row in nums for col in row ]
            new_martix = [[0 for j in range(c)] for i in range(r)]
            for i in range(r):
                for j in range(c):
                    new_martix[i][j] = nums[i*c+j]
            return new_martix
        else:
            return nums
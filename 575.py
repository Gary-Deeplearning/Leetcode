class Solution:
    def distributeCandies(self, candies):
        """
        :type candies: List[int]
        :rtype: int
        """
        size = len(candies)
        can_set = set(candies)
        if size / 2 >= len(can_set):
            return len(can_set)
        elif size / 2 < len(can_set):
            return int(size/2)
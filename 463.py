class Solution:
    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        M = len(grid)
        N = len(grid[0])
        one_count = 0
        for i in range(M):
            one_count += grid[i].count(1)
            
        count = 0
        for i in range(M):
            for j in range(N):
                # up and down
                if i < M - 1:
                    if grid[i][j] == 1 and grid[i+1][j] == 1:
                        count += 1
                # left and right
                if j < N - 1:
                    if grid[i][j] == 1 and grid[i][j+1] == 1:
                        count += 1
        return 4*one_count - 2*count
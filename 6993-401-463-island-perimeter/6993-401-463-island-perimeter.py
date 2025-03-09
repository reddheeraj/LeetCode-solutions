class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        
        m,n = len(grid), len(grid[0])
        peri = 0
        def dfs(i,j):
            if i < 0 or i >= m or j < 0 or j >= n or grid[i][j] == 0:
                return 1
            if grid[i][j] == -1:
                return 0
            grid[i][j] = -1
            return dfs(i+1, j) + dfs(i-1, j) + dfs(i, j+1) + dfs(i, j-1)
        
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 1:
                    peri += dfs(i,j)
                    break
        return peri
            
        
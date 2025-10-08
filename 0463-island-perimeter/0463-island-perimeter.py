class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        perimeter = 0
        row, col = len(grid), len(grid[0])

        def dfs(r, c):
            if r < 0 or r >= row or c < 0 or c >= col or grid[r][c] == 0:
                return 1
            if grid[r][c] == -1:
                return 0
            
            grid[r][c] = -1
            return dfs(r,c+1) + dfs(r,c-1) + dfs(r+1, c) + dfs(r-1, c)

        for r in range(row):
            for c in range(col):
                if grid[r][c] == 1:
                    perimeter += dfs(r, c)
        return perimeter
from collections import deque
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        if not grid:
            return 0
        
        rows, cols = len(grid), len(grid[0])
        visit = set()
        islands = 0
        def dfs(r,c):
            if r < 0 or r >= rows or c < 0 or c >= cols or grid[r][c] != '1':
                return 
            else:
                grid[r][c] = '0'
                dfs(r, c+1)
                dfs(r+1, c)
                dfs(r, c-1)
                dfs(r-1, c)


        for r in range(rows):
            for c in range(cols):
                if grid[r][c] == '1' and (r,c) not in visit:
                    islands += 1
                    dfs(r,c)

        return islands
class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        q = collections.deque()
        minutes = 0

        for i in range(m):
            for j in range(n):
                if grid[i][j] == 2:
                    q.append((i,j, 0))
        
        directions = [(0,1), (0,-1), (1, 0), (-1, 0)]

        while q:
            i,j,level = q.popleft()
            minutes = max(minutes, level)

            for dx, dy in directions:
                x, y = i + dx, j + dy
                if 0 <= x < m and 0 <= y < n and grid[x][y] == 1:
                    grid[x][y] = 2
                    q.append((x,y,level+1))
            
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 1:
                    return -1
    
        return minutes
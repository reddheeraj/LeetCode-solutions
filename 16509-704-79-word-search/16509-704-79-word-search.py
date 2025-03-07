class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        m, n = len(board), len(board[0])

        
        def dfs(i , j, p):
            if p == len(word):
                return True

            if i < 0 or i >= m or j < 0 or j >= n or board[i][j] != word[p]:
                return False
            
            char = board[i][j]
            # print("char = ", char)
            board[i][j] = '#'

            directions = [(0,1), (0,-1), (1,0), (-1, 0)]
            for (di, dj) in directions:
                r = i + di
                c = j + dj
                if dfs(r , c , p+1): 
                    return True

            board[i][j] = char
            return False

        for i in range(m):
            for j in range(n):
                if dfs(i, j, 0):
                    return True

                
        return False
class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        
        k = 0
        row, col = len(board), len(board[0])

        def dfs(board, word, i, j, k):
            
            if i < 0 or i >= row or j < 0 or j >= col or board[i][j] !=  word[k]:
                return False

            if k == len(word)-1:
                return True

            # mark as visited
            temp = board[i][j]
            board[i][j] = '0'

            # do some dfs calls
            res = dfs(board, word, i+1, j, k+1) or dfs(board, word, i-1, j, k+1) or dfs(board, word, i, j+1, k+1) or dfs(board, word, i, j-1, k+1)
            
            # revert cell if dfs fails
            board[i][j] = temp
            return res

        for i in range(row):
            for j in range(col):
                if board[i][j] == word[k]:
                    if dfs(board, word, i, j, k):
                        return True
        return False
class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        ans = []
        def spiral(matrix, m, n, ans, r, c, dr, dc):
            if m == 0 or n == 0:
                return
            
            for i in range(n):
                r += dr
                c += dc
                ans.append(matrix[r][c])
            
            spiral(matrix, n, m-1, ans, r, c, dc, -dr)
        spiral(matrix, len(matrix), len(matrix[0]), ans, 0, -1, 0, 1)
        return ans
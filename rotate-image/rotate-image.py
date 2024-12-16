class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m,n = len(matrix), len(matrix[0])
        res = [[0] * len(matrix) for _ in range(len(matrix))]
        for i in range(m):
            for j in range(n):
                res[j][n-i-1] = matrix[i][j]
                
        for i in range(m):
            for j in range(n):
                matrix[i][j] = res[i][j]
        
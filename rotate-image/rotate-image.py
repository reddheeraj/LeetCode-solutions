class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        top = 0
        bottom = len(matrix)
        
        while top < bottom:
            matrix[top], matrix[bottom - 1] = matrix[bottom - 1], matrix[top]
            top += 1
            bottom -= 1
        
        m = len(matrix)
        for i in range(m):
            for j in range(i+1, m):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        
class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m,n = len(matrix), len(matrix[0])
        first_row_zero = False
        first_col_zero = False

        for row in range(m):
            for col in range(n):
                if matrix[row][col] == 0:
                    if row == 0:
                        first_row_zero = True
                    if col == 0:
                        first_col_zero = True
                    matrix[0][col] = 0
                    matrix[row][0] = 0
        
        for row in range(1,m):
            for col in range(1, n):
                matrix[row][col] = 0 if matrix[row][0] == 0 or matrix[0][col] == 0 else matrix[row][col]
        
        if first_row_zero:
            for col in range(n):
                matrix[0][col] = 0
        if first_col_zero:
            for row in range(m):
                matrix[row][0] = 0
        

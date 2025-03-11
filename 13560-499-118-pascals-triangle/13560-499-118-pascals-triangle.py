class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = [[1]]

        for i in range(numRows - 1):
            dummy = [0] + res[-1] + [0]
            row = []

            for i in range(len(res[-1]) + 1):
                row.append(dummy[i] + dummy[i+1])
            res.append(row)
        return res
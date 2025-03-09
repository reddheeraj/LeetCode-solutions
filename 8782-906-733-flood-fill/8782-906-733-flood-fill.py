class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:

        m,n = len(image), len(image[0])

        def dfs(i, j, val):
            if i < 0 or i >= m or j < 0 or j >= n or image[i][j] != val or image[i][j] == color:
                return

            if image[i][j] == val:
                image[i][j] = color
                dfs(i+1, j, val)
                dfs(i-1, j, val)
                dfs(i, j+1, val)
                dfs(i, j-1, val)

        dfs(sr, sc, image[sr][sc]) 
        return image

        
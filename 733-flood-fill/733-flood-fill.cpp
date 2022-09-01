

vector<vector<int>> dfs(vector<vector<int>>& image, int sr, int sc, int oldcolor) {
    vector<vector<int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};
    for(int i = 0; i < 4; i++) {
        int m = sr + directions[i][0];
        int n = sc + directions[i][1];
        
        if (m >= 0 && m < image.size() && n >= 0 && n < image[0].size()) {
            if (image[m][n] == oldcolor) {
                image[m][n] = image[sr][sc];
                image = dfs(image, m, n, oldcolor);
            }
        }
    }
    return image;
}

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {

        int oldcolor = image[sr][sc];
        if (oldcolor == newcolor) return image;
        
        image[sr][sc] = newcolor;
        return dfs(image,sr,sc,oldcolor);
    }
};
int neighbours(vector<vector<int>> &grid,int i,int j) {
    int count = 0;
    if (i > 0 && grid[i-1][j])
        count++;
    if (j > 0 && grid[i][j-1])
        count++;
    if (i < grid.size() - 1 && grid[i+1][j])
        count++;
    if (j < grid[0].size() - 1 && grid[i][j+1])
        count++;
    
    return count;
}

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;
        int r = grid.size();
        int c = grid[0].size();
        for (int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                if (grid[i][j]) 
                    perimeter += (4-neighbours(grid,i,j));
        
        return perimeter;
    }
};
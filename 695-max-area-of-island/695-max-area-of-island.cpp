#include<bits/stdc++.h>
#pragma GCC optimize("O2")
int solve(vector<vector<int>> &grid, int i, int j, vector<vector<bool>>& seen) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || seen[i][j] || grid[i][j] == 0) return 0;
    
    seen[i][j] = true;
    return (1 + solve(grid,i+1,j,seen) + solve(grid,i-1,j,seen) + solve(grid,i,j+1,seen) + solve(grid,i,j-1,seen));
}

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int val = 0;
        vector<vector<bool>> seen(grid.size(), vector<bool> (grid[0].size()));
        for(int i = 0; i < grid.size(); i++) 
            for(int j = 0; j < grid[0].size(); j++) {
                val = max(val,solve(grid,i,j,seen));
            }
        return val;
    }
};
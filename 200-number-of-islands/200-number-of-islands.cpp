int solve(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& seen) {
    if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || seen[i][j] || grid[i][j] == '0') return 0;
    //cout<<grid[i][j]<<" "<<endl;
    seen[i][j] = true;
    return (1 + solve(grid,i+1,j,seen) + solve(grid,i-1,j,seen) + solve(grid,i,j+1,seen) + solve(grid,i,j-1,seen));
}


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int val = 0;
        vector<int> pool;
        list<int> res;
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<bool>> seen(r, vector<bool>(c));
        for(int i = 0; i < r; i++) 
            for(int j = 0; j < c; j++) {
                val = solve(grid,i,j,seen);
                pool.push_back(val);
            }
        for(int i = 0; i < pool.size(); i++) {
            if (pool[i] != 0)
                res.push_back(pool[i]);
        }
        return res.size();
    }
};
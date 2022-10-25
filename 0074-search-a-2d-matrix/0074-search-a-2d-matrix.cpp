#pragma GCC optimize('O2')
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size(); 
        int row = 0, col = cols - 1;
			
        while (row < matrix.size() && col > -1) {
            int cur = matrix[row][col];
            if (cur == target) return true;
            if (target > cur) row++;
            else col--;
        }
        return false;
    }
};
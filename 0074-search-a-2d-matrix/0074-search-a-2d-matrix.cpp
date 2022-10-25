#pragma GCC optimize('O2')
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i = 0; i < matrix.size(); i++) {  //brute force approach
        //     for (int j = 0; j < matrix[0].size(); j++) {
        //         if (target == matrix[i][j]) return true;
        //     }
        // }
        //return false;
        int rows = matrix.size();
        int cols = matrix[0].size(); 
        int row = 0, col = cols - 1;
			
        while (row < rows && col > -1) {
            int cur = matrix[row][col];
            if (cur == target) return true;
            if (target > cur) row++;
            else col--;
        }
        return false;
    }
};
#pragma GCC optimize("O2")
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int r=triangle.size()-2;r>=0;r--){
            for(int c=0;c<=r;c++){
                triangle[r][c] = min(triangle[r+1][c],triangle[r+1][c+1])+triangle[r][c];
            }
	    }
	    return triangle[0][0];
    }
};
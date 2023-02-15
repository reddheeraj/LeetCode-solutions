//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   

public:

    void solve1(vector<vector<int>>&arr, vector<vector<bool>>& dp) {

        int m = arr.size();
        int n = arr[0].size();

        vector<vector<int>>vis(m, vector<int>(n, 0));
        vector<vector<int>>dir = {{0,-1}, {-1,0}, {0,1}, {1,0}};
        queue<pair<int,int>>q;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(dp[i][j]) q.push({i, j}), vis[i][j]++;
            }
        }

        while(!q.empty()) {

            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for(int i=0; i<4; i++) {

                int xx = dir[i][0] + x;
                int yy = dir[i][1] + y;

                // cout<<x<<' '<<y<<' '<<xx<<' '<<yy<<endl;
                if(xx >= 0 && xx < m && yy >= 0 && yy < n && !vis[xx][yy]) {

                    if(arr[x][y] <= arr[xx][yy]) {

                        dp[xx][yy] = true;
                        q.push({xx, yy});
                        vis[xx][yy]++;
                    }
                }
            }
        }
    }

 

    int water_flow(vector<vector<int>> &arr,int m,int n) {

        vector<vector<bool>>dp(m, vector<bool>(n, false));
        vector<vector<bool>>bp(m, vector<bool>(n, false));

        for(int i=0; i<n; i++) {
            dp[0][i] = true;
            bp[m-1][i] = true;
        }

        for(int i=0; i<m; i++) {

            dp[i][0] = true;
            bp[i][n-1] = true;
        }

        solve1(arr, dp);
        solve1(arr, bp);

        int c = 0;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {

                if(dp[i][j] && bp[i][j]) {

                    c++;
                }
            }
        }
        return c;
    }

};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
            }
        }
        Solution ob;
        cout << ob.water_flow(mat, n, m) << endl;
        
    }
}


// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Code here
        // for(int i = 0; i < N; i++) if (A[i] == Key) return 1;
        // return 0;
        sort(A.begin(), A.end());
        int l = 0, r = N-1, m;
        while(l <= r) {
            m = (l+r)/2;
            if (A[m] == Key) return 1;
            else if (A[m] < Key) l = m+1;
            else r = m-1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends
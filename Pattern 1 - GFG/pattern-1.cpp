//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends



class Solution {
  public:
    
    void printSquare(int n) {
        // code here
        int i = n;
        string s = "* ";
        while(i > 0)
            {
                for(int j = 0; j < n; j++) {
                    cout<<s;
                }
                cout<<endl;
                i--;
            }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends
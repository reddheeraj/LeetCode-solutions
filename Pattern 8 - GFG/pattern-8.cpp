//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    string s = "*";
        int x = 2*n - 1;
        int space = 0;
        for (int i = 0; i < n; i++) {
            for(int k = 0; k < space; k++) {
                    cout<<" ";
            }
            space++;
            for (int j = 0; j < x; j++) {
                cout<<s;
            }
            cout<<endl;
            x-=2;
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    if (n == 1) {
	        cout<<"*"<<endl;
	    }
	    else {
            for(int i = n; i > 0 ; i--) {
                for (int j = n; j > 0; j--) {
                    cout<<"* ";
                }
                n--;
                cout<<endl;
            }
            
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
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos;
	    vector<int> neg;
	    vector<int> res;
	    for(int i = 0; i < n; i++) {
	        if (arr[i] >= 0) pos.push_back(arr[i]);
	        if (arr[i] < 0) neg.push_back(arr[i]);
	    }
	    if (pos.size() == 0) {
	        for(int i = 0; i < n; i++) arr[i] = neg[i];
	    }
	    else if (neg.size() == 0) {
	        for(int i = 0; i < n; i++) arr[i] = pos[i];
	    }else {
    	    int i = 0, j = 0;
    	    while(i < pos.size() && j < neg.size()) {
    	        res.push_back(pos[i]);
    	        i++;
    	        res.push_back(neg[j]);
    	        j++;
    	    }
    	    while(i < pos.size()) {
                res.push_back(pos[i]);
                i++;
            }
            
            while(j < neg.size()) {
                res.push_back(neg[j]);
                j++;
            }
    	    
    	    for(i = 0; i < n; i++) {
    	        arr[i] = res[i];
    	    }
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
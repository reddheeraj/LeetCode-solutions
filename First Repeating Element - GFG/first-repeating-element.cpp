//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int,pair<int,int>> map;
        for(int i = 0; i < n; i++) {
            if (map.find(arr[i]) == map.end()) 
                map[arr[i]] = make_pair(i,1);
            else {
                map[arr[i]].second += 1;
            }
        }
        int less = 1e9;
        for(auto i : map) {
            if (i.second.first < less && i.second.second > 1)
                less = i.second.first;
        }
        if (less == 1e9) return -1;
        return less+1;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends
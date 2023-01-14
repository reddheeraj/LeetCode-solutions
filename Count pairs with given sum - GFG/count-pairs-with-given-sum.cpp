//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

// bool binarysearch(int arr[], int n, int k) {
//     int left = 0, middle, right = n - 1;
//     while (left <= right) {
//         middle = (left+right)/2;
//         if (arr[middle] == k) return true;
//         else if (arr[middle] < k) left = middle + 1; 
//         else if (arr[middle] > k) right = middle - 1;
//     }
    
//     return false;
// }

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        // int count = 0;
        // for(int i = 0; i < n; i++) {
        //     if (binarysearch(arr, n, k-arr[i])) {
        //         count++;
        //     }
        // }
        // return count;
        unordered_map<int,int>m;

        int ans = 0;
        for(int i=0;i<n;i++){
            int val = k-arr[i];
            if(m.find(val) != m.end()){
               ans += m[val];
            }
            m[arr[i]]++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends
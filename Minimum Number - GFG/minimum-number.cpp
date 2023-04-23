//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int gcd(int a, int b) {
        if (a== 0) return b;
        if (b == 0) return a;
        return gcd(b%a, a);
    }
    int minimumNumber(int n,vector<int> &arr){
        // Code here
        if (n <= 1) return 0;
        int res = arr[0];
        for(int i = 1; i < n; i++) {
            res = gcd(min(res, arr[i]), max(res, arr[i]));
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.minimumNumber(n,arr)<<endl;
    }
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // // Complete the function
        // int j = -1, sum = 0, len = 0, maxi = 0;
        // for(int i = 0; i < N; i++) {
        //     sum += A[i];
            
        //     if (sum == K) {
        //         j++;
        //         len = i - j;
        //         maxi = max(maxi, len);
        //         sum = A[i];
        //     }
            
        //     while (sum > K) {
        //         sum = sum - A[j];
        //         j++;
        //     }
            
        // }
        // if (maxi == 0) return 0;
        // return maxi+1;
        
        unordered_map<int,int> map;
        map[0] = -1;
        int len = 0, sum = 0;
        for(int i = 0; i < N; i++) {
            sum += A[i];
            if (map.find(sum - K) != map.end()) {
                len = max(len, i - map[sum-K]);
            }
            if (map.find(sum) == map.end()) {
                map[sum] = i;
            }
        }
        
        return len;
        
    }

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
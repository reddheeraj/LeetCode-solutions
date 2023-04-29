//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    void cal(long long N, int arr[],long long &ans, int &i){
        if(N == 0) return;
        ans += arr[N%5] * pow(10,i++);
        if(N%5 == 0) N--;
        cal(N/5,arr,ans, i);
    }
    long long findNumber(long long N){
        // Code here
        int arr[] = {9, 1, 3, 5, 7,};
        long long ans = 0;
        // i denotes the placvalue ones/tens/hundred etc.
        int i = 0;
        cal(N, arr, ans, i);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends
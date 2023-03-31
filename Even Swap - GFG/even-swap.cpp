//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &ans,int n){
            int x=0;
            for(int i=1;i<n;i++){
                if((ans[i]+ans[i-1])%2==0){
                    continue;
                }
                else{
                    sort(ans.begin()+x,ans.begin()+i,greater<int>());
                    x=i;
                }
            }
            sort(ans.begin()+x,ans.end(),greater<int>());
            return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
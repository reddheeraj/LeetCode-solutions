//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if (n <= 1) return 0;
        if (arr[0] == 0) return -1;
        
        int reach = arr[0];
        int step = arr[0];
        int jump = 1;
        
        for(int i = 1; i < n; i++) {
            if (i == n - 1) return jump;
            
            reach = max(reach, i + arr[i]);
            step--;
            if(step == 0) {
                jump++;
                if ( i >= reach)
                    return -1;
                step = reach - i;
            }
        }
        
        return jump;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
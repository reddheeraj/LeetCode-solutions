//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int find_first(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int find_last(int arr[],int n,int x){
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    v.push_back(find_first(arr,n,x));
    v.push_back(find_last(arr,n,x));
    return v;
}
//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
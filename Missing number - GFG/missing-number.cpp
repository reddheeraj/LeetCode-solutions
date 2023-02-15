//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // Your code goes here
    int sum = (N*(N-1))/2 + N;
    
    int sum2 = 0;
    int n = N-1;
    for(int i = 0; i < n; i++) sum2 += A[i];
    //cout<<"sum = "<<sum<<" sum2 = "<<sum2<<endl;
    return sum-sum2;
    
    
}
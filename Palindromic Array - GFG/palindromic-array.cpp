//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	
    	for(int i = 0; i < n; i++) {
    	    int num = a[i], digit, rev = 0;
        	do {
                digit = num % 10;
                rev = (rev * 10) + digit;
                num = num / 10;
                
            } while (num != 0);
            
            if (a[i] == rev) continue;
            else return 0;
    	}
    	
    	return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
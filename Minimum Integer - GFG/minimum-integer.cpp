//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        // code here
        if (A.size() == 1) return A[0];
        long long int sum = 0, x, res = INT_MAX;
        for(int i = 0; i < N; i++) {
            sum += A[i];
        }
        for(int i = 0; i < N; i++) {
            x = A[i];
            if (sum <= N*x) {
                //cout<<"sum = "<<sum<<" N = "<<N<<" A[i] = "<<x<<endl;
                //cout<<(sum <= N*x)<<endl;
                res = min(res, x);
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.minimumInteger(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
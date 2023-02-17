//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        // int m;
        // while(l <= h) {
        //     m = (l+h)/2;
        //     cout<<"m = "<<m<<endl;
        //     if (A[m] == key) return m;
        //     else if (A[m] < key) l = m + 1;
        //     else h = m - 1;
        // }
        // return -1;
        if (A[l] == key) return l;
        if (A[h] == key) return h;
        for(int i = 0; i < h; i++) {
            //cout<<"A[i] = "<<A[i]<<endl;
            if (A[i] == key) return i;
        }
            
        return -1;
       
        
        
        
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends
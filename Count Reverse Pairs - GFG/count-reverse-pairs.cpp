//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
    int count;
  public:
    
    void merge(vector<int> &arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;
        int L[n1], M[n2];
        int k = l;
        for(int i = 0; i < n1; i++) L[i] = arr[k++];
        k = m + 1;
        for(int i = 0; i < n2; i++) M[i] = arr[k++];
        
        int i = 0, j = 0;
        k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= M[j]) {
                arr[k++] = L[i++];
            }
            else {
                for(int p = n1-1; p >= i; p--)
                    if (L[p] > 2 * M[j]) count+=1;
                    else break;
                arr[k++] = M[j++];
            }
        }
        
        while (i < n1) {
            arr[k++] = L[i++];
        }
        while(j < n2) {
            arr[k++] = M[j++];
        }
    }
    
    void mergeSort(vector<int> &arr, int l, int r) {
        if (l < r) {
            int m = (l+r)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            merge(arr,l,m,r);
        }
    }
    int countRevPairs(int n, vector<int> arr) {
        // Code here
        
        count = 0;
        // for(int i = 0; i < n; i++) {
        //     for (int j = i+1; j < n; j++) {
        //         if (i >= 0 && j > i && j < n) {
        //             if (arr[i] > 2 * arr[j]) {
        //                 count++;
        //             }
        //         }
        //     }
        // }
        // return count;
        int l = 0, r = arr.size() - 1;
        mergeSort(arr, l, r);
        //for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends
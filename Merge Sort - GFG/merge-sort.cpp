//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        // Your code here
        int l1 = m - l + 1;
        int m1 = r - m;
        int L[l1], M[m1];
        
        for(int i = 0; i < l1; i++)
            L[i] = arr[l+i];
        for(int i = 0; i < m1; i++)
            M[i] = arr[i + m + 1];
            
        int i = 0, j = 0, k = l;
        while (i < l1 && j < m1) {
            if (L[i] <= M[j]) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = M[j];
                j++;
            }
            k++;
        }
        
        while(i < l1) {
            arr[k] = L[i];
            i++;
            k++;
        }
        
        while(j < m1) {
            arr[k] = M[j];
            j++;
            k++;
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if (l < r) {
            int m = (l+r)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            merge(arr,l,m,r);
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
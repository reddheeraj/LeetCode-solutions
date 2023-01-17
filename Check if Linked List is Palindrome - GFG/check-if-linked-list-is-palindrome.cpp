//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        struct Node *nav = head;
        int num = 0,ans = 0, rev = 0, n = 0, len = 0;
        while(nav != NULL) {
            len++;
            nav = nav->next;
        }
        nav = head;
        int nodes[len], i = 0;
        //vector<int> nodes;
        while(nav != NULL) {
            nodes[i] = nav->data;
            nav = nav->next;
            i++;
        }
        for(int i = 0; i < len; i++) {
            //cout<<"nodes["<<i<<"] = "<<nodes[i]<<endl;
            num = num*10 + nodes[i];
        }
        //cout<<"num = "<<num<<endl;
    
        ans = num;
        while(num != 0) {
            n = num%10;
            rev = rev*10 + n;
            num = num/10;
        }
        
        if (rev == ans) return true;
        else return false;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends
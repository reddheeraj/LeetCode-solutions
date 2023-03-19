//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* rev(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        
        head = rev(head);
        int val = 0, i = 0;
        Node* temp = head;
        Node* prev = NULL;
        while(temp != NULL) {
            if (temp->data != 9) {
                temp->data += 1;
                break;
            }
            else {
                temp->data = 0;
                //temp = temp->next;
            }
            prev = temp;
            temp = temp->next;
            //val += temp->data * pow(10,i);
            //i++;
            //temp = temp->next;
        }
        if (temp == NULL) {
            temp = new Node(1);
            prev->next = temp;
            //temp = temp->next;
        }
        return rev(head);
        // val += 1;
        // temp = head;
        // while(temp != NULL) {
            
        //     temp->data = val%10;
        //     val = val/10;
        //     temp = temp->next;
        // }
        // head = rev(head);
        // return head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends
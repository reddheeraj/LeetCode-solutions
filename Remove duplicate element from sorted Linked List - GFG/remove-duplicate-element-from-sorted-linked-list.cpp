//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
        Node *temp = head;

		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
    unordered_map<int, int> map;
    Node *temp = head;
    Node *prev = NULL;
    if (head == NULL) return NULL;
    while(temp != NULL) {
        //map[temp->data]+=1;
        //cout<<"map["<<temp->data<<"] = "<<map[temp->data]<<endl;
        if (map[temp->data] == 1) {
            Node *t = prev;
            t->next = temp->next;
            t = temp;
            temp = temp->next;
            delete(t);
            //map[temp->data]--;
            //cout<<"temp->data = "<<temp->data<<endl;
        } 
        else {
            map[temp->data] = 1;
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}
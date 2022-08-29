/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#pragma GCC optimize("O2")
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        struct ListNode *temp = head;
        struct ListNode *prev;
        int len = 0, j = 1;
        
        if (head == NULL) return NULL;
        if (head -> next == NULL) return NULL;
        while(temp != NULL) {
            temp = temp->next;
            len++;
        }
        
        int trav = len - n + 1;
         if (trav == 1) {
             temp = head;
             head = head->next;
             temp->next = NULL;
             return head;
         }
        
        temp = head;
        
        while (j < trav) {
            prev = temp;
            temp = temp->next;
            j++;
        }
        prev->next = temp->next;
        //free(temp);
        return head;
    }
};
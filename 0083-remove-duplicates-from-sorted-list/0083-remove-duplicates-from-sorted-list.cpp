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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode *nav = head;
        int len = 0;
        
        while (nav->next != NULL) {
            ListNode *temp = nav->next;
            
            if (nav->val == temp->val) {
                nav->next = temp->next;
                temp->next = NULL;
            }
            else {
                nav = nav->next;
            }
        } 
        
        
        return head;
    }
};
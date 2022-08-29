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
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        struct ListNode* nav = head;
        while(nav != NULL) {
            nav = nav->next;
            len++;
        }
        if (len % 2 == 0) { //even
            int mid = len/2;
            struct ListNode* temp = head;
            int i = 1;
            while(i < mid + 1) {
                temp = temp->next;
                i++;
            }
            return temp;
        } 
        else { //odd
            int mid = len/2;
            struct ListNode* temp = head;
            int i = 1;
            while(i < mid + 1) {
                temp = temp->next;
                i++;
            }
            return temp;
            
        }
        
    }
};
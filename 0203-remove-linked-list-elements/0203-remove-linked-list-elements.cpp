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
    ListNode* removeElements(ListNode* head, int val) {
         if (head == NULL) return head;
        
//         ListNode *nav = head;
//         ListNode *prev = NULL;
        
//         while (nav != NULL) {
//             if (head == NULL) return NULL;
//             if (head->val == val) {
//                 ListNode *t = head;
//                 head = head->next;
//                 delete t;
//             }
            
//             if (nav->val == val) {
//                 ListNode *temp = nav;
//                 prev->next = temp->next;
//                 temp->next = NULL;
//                 nav = prev->next;
                
//             }
//             else {
//                 prev = nav;
//                 nav = nav->next;
//             }
//         }
//         return head;
        head->next = removeElements(head->next, val);
        return (head->val == val) ? head->next : head;
    }
};
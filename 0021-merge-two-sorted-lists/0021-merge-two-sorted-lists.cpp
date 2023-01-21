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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if (head1 == NULL) return head2;
        if (head2 == NULL) return head1;
        ListNode* mergedHead = nullptr;
        if (head1->val <= head2->val) {
            mergedHead = head1;
            head1 = head1->next;
        } else {
            mergedHead = head2;
            head2 = head2->next;
        }

        ListNode* mergedTail = mergedHead;

        while (head1 != nullptr && head2 != nullptr) {
        ListNode* temp = nullptr;
            if (head1->val <= head2->val) {
                temp = head1;
                head1 = head1->next;
            } else {
                temp = head2;
                head2 = head2->next;
            }

            mergedTail->next = temp;
            mergedTail = temp;
        }

        if (head1 != nullptr) {
            mergedTail->next = head1;
        } else if (head2 != nullptr) {
            mergedTail->next = head2;
        }

        return mergedHead;
    }
};
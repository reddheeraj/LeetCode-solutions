# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry = 0
        c1, c2 = l1, l2
        dummy = ListNode()
        curr = dummy

        while c1 or c2 or carry:
            val1, val2 = c1.val if c1 else 0, c2.val if c2 else 0
            total = val1 + val2 + carry
            carry = total // 10
            value = total % 10

            curr.next = ListNode(value)
            curr = curr.next

            if c1:
                c1 = c1.next
            if c2:
                c2 = c2.next
        
        return dummy.next
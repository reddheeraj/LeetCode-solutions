# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        temp = head
        length = 0
        while temp:
            temp = temp.next
            length += 1
        
        if length-n == 0:
            return head.next
        
        curr = head
        for _ in range(1, length-n):
            curr = curr.next
        
        curr.next = curr.next.next
        return head
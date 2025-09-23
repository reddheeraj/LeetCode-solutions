# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None or head.next is None:
            return head
    
        curr = head
        next_ = head
        prev = None
        
        while curr is not None:
            next_ = curr.next
            curr.next = prev
            prev = curr
            curr = next_
        
        return prev
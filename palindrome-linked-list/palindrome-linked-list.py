# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        if head is None or head.next is None:
            return True
        
        slow = fast = head
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
        
        prev = None
        while slow:
            temp = slow.next
            slow.next = prev
            prev = slow
            slow = temp
        
        f1 = head
        f2 = prev
        while f2:
            if f2.val != f1.val:
                return False
            f1 = f1.next
            f2 = f2.next
        
        return True
            
            
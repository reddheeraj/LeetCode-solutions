# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if head is None or head.next is None:
            return False
        
        slow = fast = head
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
            
            # print(f"fast = {fast.val}, slow = {slow.val}")
            if fast == slow:
                return True
        
        return False
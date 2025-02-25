# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        
        if not list1:
            return list2
        if not list2:
            return list1
        
        if list1.val <= list2.val:
            head = s1 = list1
            s2 = list2
        else:
            head = s1 = list2
            s2 = list1
        
        # s1 = curr1 = list1
        # s2 = curr2 = list2
        
        while s1 and s2:
            while s1.next and s1.next.val < s2.val:
                s1 = s1.next
                
            temp = s1.next
            s1.next = s2
            s1 = s2
            s2 = temp
        
        return head
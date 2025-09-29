# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

    def __lt__(self, other):
        return self.val < other.val
import heapq

class Solution:
    # def merge(self, list1, list2):
    #     if not list1:
    #         return list2
    #     if not list2:
    #         return list1
        
    #     dummy = ListNode()
    #     curr = dummy
    #     while list1 and list2:
    #         if list1.val < list2.val:
    #             curr.next = list1
    #             list1 = list1.next
    #         else:
    #             curr.next = list2
    #             list2 = list2.next
    #         curr = curr.next
        
    #     if list1:
    #         curr.next = list1
    #     if list2:
    #         curr.next = list2
    #     return dummy.next

    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        # if not lists:
        #     return None
        
        # merged = None
        # for l in lists:
        #     merged = self.merge(merged, l)
        # return merged
        heap = []
        for i, l in enumerate(lists):
            if l:
                heapq.heappush(heap, (l.val, i, l))
        
        dummy = ListNode()
        curr = dummy

        while heap:
            val, i, node = heapq.heappop(heap)
            curr.next = node
            curr = curr.next
            if node.next:
                heapq.heappush(heap, (node.next.val, i, node.next))
                
        return dummy.next

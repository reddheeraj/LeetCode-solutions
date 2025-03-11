import heapq
# Definition for singly-linked list.

# Time Comp: O(NlogK) N: no. of nodes, K: no. of linked lists
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
    
    def __lt__(self, other):
        return self.val < other.val
        
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        # # q = heapq.heapify(lists)

        # # list1 = q.popleft()
        # list1 = lists[0]
        # while lists:
        #     # list2 = q.popleft()
        #     list2 = lists.pop()
        #     list1 = self.merge(list1, list2)

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
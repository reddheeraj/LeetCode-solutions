# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        
        nums = []
        nav = head
        while nav != None:
            nums.append(nav.val)
            nav = nav.next
            
        i = 0
        j = len(nums)-1

        while i < j:
            # print(f"nums[{i}] = {nums[i]}, nums[{j}] = {nums[j]}")
            if nums[i] != nums[j]:
                return False
            i += 1
            j -= 1
        return True
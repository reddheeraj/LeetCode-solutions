# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        def helper(root, subroot):

            if not root and not subroot:
                return True
            
            if not root or not subroot:
                return False
            
            if root.val == subroot.val and helper(root.left, subroot.left) and helper(root.right, subroot.right):
                return True
            
            return False
        
        if not root:
            return False
        if not subRoot:
            return True
        if helper(root, subRoot):
            return True
        
        return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)

                
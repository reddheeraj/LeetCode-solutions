# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Time Comp: O(N*M), N: no. of root nodes, M: no. of subtree nodes
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        
        def helper(p, q):
            if not p and not q:
                return True
            
            if not p or not q:
                return False
            
            if p.val == q.val:
                return helper(p.left, q.left) and helper(p.right, q.right)
        
        if not subRoot:
            return True
        
        if not root:
            return False
        
        if helper(root, subRoot):
            return True
        
        return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)   

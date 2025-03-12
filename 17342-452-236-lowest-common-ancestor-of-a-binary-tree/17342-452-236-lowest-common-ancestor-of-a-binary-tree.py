# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        def find(root, p, q):
            if not root:
                return None
            
            if root == p or root == q:
                return root
            
            left = find(root.left, p, q)
            right = find(root.right, p, q)

            if left and right:
                return root
            
            return left if left else right
        
        return find(root, p, q)
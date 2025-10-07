# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        
        # def helper(root, p, q):
        #     if not root:
        #         return
        #     if root == p or root == q:
        #         return root
            
        #     left = helper(root.left, p, q)
        #     right = helper(root.right, p, q)

        #     if left and right:
        #         return root
            
        #     return left if left else right
        # return helper(root, p, q)

        while root:
            if p.val > root.val and q.val > root.val:
                root = root.right
            elif p.val < root.val and q.val < root.val:
                root = root.left
            else:
                return root
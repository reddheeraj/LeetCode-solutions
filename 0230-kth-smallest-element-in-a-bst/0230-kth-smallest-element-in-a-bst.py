# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        node_list = []
        def inorder(root, node_list):
            if not root:
                return
            inorder(root.left, node_list)
            node_list.append(root.val)
            inorder(root.right, node_list)
        
        inorder(root, node_list)

        return node_list[k-1:k][0]
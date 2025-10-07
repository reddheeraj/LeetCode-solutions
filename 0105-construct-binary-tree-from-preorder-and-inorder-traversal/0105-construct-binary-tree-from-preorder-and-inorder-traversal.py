# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        preorder = collections.deque(preorder)

        def builder(predorder, inorder):
            if inorder:
                idx = inorder.index(preorder.popleft())
                root = TreeNode(inorder[idx])

                root.left = builder(preorder, inorder[:idx])
                root.right = builder(preorder, inorder[idx+1:])
            
                return root
        
        return builder(preorder, inorder)

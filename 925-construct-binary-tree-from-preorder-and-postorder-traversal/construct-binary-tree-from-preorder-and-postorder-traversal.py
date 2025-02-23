# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def constructFromPrePost(self, preorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
        index = [0]
        return self.construct(preorder, postorder, index, 0, len(preorder) - 1)
    def construct(self, preorder, postorder, index, l, h):
        if index[0] >= len(preorder) or l > h:
            return None
        
        root = TreeNode(preorder[index[0]])
        index[0] += 1
        if l == h:
            return root

        i = l
        while i <= h and postorder[i] != preorder[index[0]]:
            i += 1
        
        if i <= h:
            root.left = self.construct(preorder, postorder, index, l, i)
            root.right = self.construct(preorder, postorder, index, i+1, h-1)
        return root
        
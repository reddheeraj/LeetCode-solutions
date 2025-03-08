"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

from typing import Optional
class Solution:
    def cloneGraph(self, n: Optional['Node']) -> Optional['Node']:
        def f(n, d = {}):
            if result := d.get(n.val, 0):
                return result
            
            d[n.val] = Node(n.val)
            d[n.val].neighbors = [*map(f, n.neighbors)]

            return d[n.val]
        
        return n and f(n)
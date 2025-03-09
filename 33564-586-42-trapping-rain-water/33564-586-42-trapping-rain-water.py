class Solution:
    def trap(self, height: List[int]) -> int:
        max_height_left = [0] * len(height)
        max_height_right = [0] * len(height)
        water = [0] * len(height)
        max_left = max_right = 0
        for i in range(1, len(height)):
            max_left = max(max_left, height[i-1])
            max_height_left[i] = max_left
        
        for i in range(len(height) - 2, -1, -1):
            max_right = max(max_right, height[i+1])
            max_height_right[i] = max_right
        
        for i in range(len(height)):
            water[i] = min(max_height_left[i], max_height_right[i]) - height[i]
        
        
        return sum([w for w in water if w >= 0])
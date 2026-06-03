#3.Container with Most Water
class Solution:
    def maxArea(self, height: list[int]) -> int:
        left=0
        right=len(height)-1
        max=0
        while left<right:
            width=right-left
            current=min(height[left],height[right])*width
            if current>max:
                max=current
                if height[left]>height[right]:
                    left+=1
                else:
                    right-=1
        return max
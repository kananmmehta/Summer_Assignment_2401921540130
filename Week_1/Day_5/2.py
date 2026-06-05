#2.Reverse String
class Solution:
    def reverseString(self, s: list[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        n= len(s)
        temp= []
        for i in range(n//2):
            temp=s[i]
            s[i]=s[n-1-i]
            s[n-1-i]=temp
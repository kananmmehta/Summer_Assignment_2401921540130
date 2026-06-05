#Longest Common Prefix
class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not strs:
            return ""
        first = min(strs)
        last = max(strs)
        for i in range(len(first)):
            if first[i] != last[i]:
                return first[:i]
        return first
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::vector<int> charMap(128, -1);
        int left = 0;
        int maxLength = 0;
        for (int right = 0; right < s.length(); ++right) {
            char currentChar = s[right];
            if (charMap[currentChar] >= left) {
                left = charMap[currentChar] + 1;
            }
            charMap[currentChar] = right;
            maxLength = std::max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};
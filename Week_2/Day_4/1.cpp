#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string reverseWords(std::string s) {
        int n = s.length();
        int i = 0;
        
        while (i < n) {
            // Skip any leading spaces (handles multiple spaces if they exist)
            while (i < n && s[i] == ' ') {
                i++;
            }
            
            // Find the end of the current word
            int j = i;
            while (j < n && s[j] != ' ') {
                j++;
            }
            
            // Reverse the current word in-place
            std::reverse(s.begin() + i, s.begin() + j);
            
            // Move to the next character after the word
            i = j;
        }
        
        return s;
    }
};
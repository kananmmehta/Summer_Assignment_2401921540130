#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    // Helper function: Stretches outwards from a center and returns the matching palindrome
    std::string expandFromCenter(std::string s, int left, int right) {
        // While we are inside the string boundaries AND the characters match
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;  // Move left pointer further left
            right++; // Move right pointer further right
        }
        
        // Return the slice of the string that matched.
        // (left + 1) because the loop stops *after* it went one step too far.
        // (right - left - 1) is the formula for the length of this substring.
        return s.substr(left + 1, right - left - 1);
    }

    std::string longestPalindrome(std::string s) {
        if (s.length() <= 1) return s;

        std::string longest = "";

        for (int i = 0; i < s.length(); i++) {
            // Case 1: Odd length palindromes (Center is a single character at i)
            std::string oddPalindrome = expandFromCenter(s, i, i);
            if (oddPalindrome.length() > longest.length()) {
                longest = oddPalindrome;
            }

            // Case 2: Even length palindromes (Center is between i and i+1)
            std::string evenPalindrome = expandFromCenter(s, i, i + 1);
            if (evenPalindrome.length() > longest.length()) {
                longest = evenPalindrome;
            }
        }

        return longest;
    }
};
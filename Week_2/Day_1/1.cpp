#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::vector<int> charCounts(26, 0);
        for (size_t i = 0; i < s.length(); i++) {
            charCounts[s[i] - 'a']++;
            charCounts[t[i] - 'a']--;
        }
        for (int count : charCounts) {
            if (count != 0) {
                return false;
            }
        }

        return true;
    }
};
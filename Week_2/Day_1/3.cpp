#include <string>
#include <vector>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        if (ransomNote.length() > magazine.length()) {
            return false;
        }
        std::vector<int> charCounts(26, 0);
        for (char c : magazine) {
            charCounts[c - 'a']++;
        }
        for (char c : ransomNote) {
            charCounts[c - 'a']--;
            if (charCounts[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};
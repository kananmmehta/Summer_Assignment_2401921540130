#include <string>
#include <vector>

class Solution {
public:
    std::vector<int> findAnagrams(std::string s, std::string p) {
        std::vector<int> result;
        int s_len = s.length();
        int p_len = p.length();
        if (p_len > s_len) {
            return result;
        }
        std::vector<int> p_count(26, 0);
        std::vector<int> s_count(26, 0);
        for (int i = 0; i < p_len; ++i) {
            p_count[p[i] - 'a']++;
            s_count[s[i] - 'a']++;
        }
        if (p_count == s_count) {
            result.push_back(0);
        }
        for (int i = p_len; i < s_len; ++i) {
            s_count[s[i] - 'a']++;
            s_count[s[i - p_len] - 'a']--;
            if (p_count == s_count) {
                result.push_back(i - p_len + 1);
            }
        }
        
        return result;
    }
};
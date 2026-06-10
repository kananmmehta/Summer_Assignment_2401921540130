#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int h_len = haystack.length();
        int n_len = needle.length();
        if (n_len > h_len) return -1;
        for (int i = 0; i <= h_len - n_len; ++i) {
            int j = 0;
            while (j < n_len && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == n_len) {
                return i;
            }
        }
        return -1;
    }
};
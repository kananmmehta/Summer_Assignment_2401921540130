#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        int indexAns = 0; // Where we write our compressed character/number
        int i = 0;        // Where we are reading from

        while (i < chars.size()) {
            char current_char = chars[i];
            int count = 0;

            // Count how many times this character repeats consecutively
            while (i < chars.size() && chars[i] == current_char) {
                count++;
                i++; // Move reader forward
            }

            // 1. Always write the character itself
            chars[indexAns] = current_char;
            indexAns++;

            // 2. If it repeated more than once, write the count
            if (count > 1) {
                // Convert the count number into a string (e.g., 12 becomes "12")
                std::string countStr = std::to_string(count);
                
                // Write each digit character of the count into the array
                for (char ch : countStr) {
                    chars[indexAns] = ch;
                    indexAns++;
                }
            }
        }

        // The final position of our writer is exactly the new length of the array!
        return indexAns;
    }
};
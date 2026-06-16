#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    // This helper function does all the heavy lifting
    void buildCombinations(int openCount, int closeCount, std::string currentString, std::vector<std::string>& result) {
        // Base Case: If we have used up all allowed open and close parentheses,
        // it means our string is complete and valid! Save it.
        if (openCount == 0 && closeCount == 0) {
            result.push_back(currentString);
            return;
        }

        // Choice 1: Can we add an opening parenthesis?
        // Yes, as long as we have some left (count > 0).
        if (openCount > 0) {
            buildCombinations(openCount - 1, closeCount, currentString + "(", result);
        }

        // Choice 2: Can we add a closing parenthesis?
        // Yes, but ONLY if we have more remaining close brackets than open brackets.
        // (Which means we have unmatched open brackets waiting in our currentString).
        if (closeCount > openCount) {
            buildCombinations(openCount, closeCount - 1, currentString + ")", result);
        }
    }

    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        // Start with n open brackets, n close brackets, and an empty string ""
        buildCombinations(n, n, "", result);
        return result;
    }
};
#include <iostream>
#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> bracketStack;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                bracketStack.push(ch);
            } 
            else {
                if (bracketStack.empty()) {
                    return false;
                }
                char topChar = bracketStack.top();
                if ((ch == ')' && topChar == '(') ||
                    (ch == '}' && topChar == '{') ||
                    (ch == ']' && topChar == '[')) {
                    bracketStack.pop(); 
                } else {
                    return false; 
                }
            }
        }
        return bracketStack.empty();
    }
};
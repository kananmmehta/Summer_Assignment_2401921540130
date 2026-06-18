#include <vector>
#include <string>
#include <stack>

class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        std::stack<int> s;

        for (const std::string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int num2 = s.top(); s.pop();
                int num1 = s.top(); s.pop();
                if (token == "+") s.push(num1 + num2);
                else if (token == "-") s.push(num1 - num2);
                else if (token == "*") s.push(num1 * num2);
                else if (token == "/") s.push(num1 / num2); 
            } 
            else {
                s.push(std::stoi(token));
            }
        }
        return s.top();
    }
};
#include <iostream>
#include <string>
#include <stack>

class Solution {
public:
    std::string decodeString(std::string s) {
        std::stack<int> numStack;          // Keeps track of the multiplier numbers
        std::stack<std::string> strStack;  // Keeps track of the text we built so far
        std::string currentText = "";      // The text we are building right now
        int currentNum = 0;                // The number we are building right now

        for (char c : s) {
            if (isdigit(c)) {
                // If it's a number, update our currentNum.
                // (c - '0' turns a character like '3' into the actual number 3)
                currentNum = currentNum * 10 + (c - '0');
            } 
            else if (c == '[') {
                // We hit an opening bracket! Time to save our progress.
                numStack.push(currentNum);     // Save the number for later
                strStack.push(currentText);   // Save the text we made so far
                
                // Reset them to start fresh inside the brackets
                currentNum = 0;
                currentText = "";
            } 
            else if (c == ']') {
                // We hit a closing bracket! Time to undo the last save and multiply.
                std::string previousText = strStack.top(); 
                strStack.pop();
                
                int repeatTimes = numStack.top(); 
                numStack.pop();

                // Repeat the text inside the brackets
                std::string repeatedPiece = "";
                for (int i = 0; i < repeatTimes; i++) {
                    repeatedPiece += currentText;
                }

                // Glue the old text and the new repeated text together
                currentText = previousText + repeatedPiece;
            } 
            else {
                // It's just a normal letter (like 'a' or 'b'), just add it to our text
                currentText += c;
            }
        }

        return currentText;
    }
};
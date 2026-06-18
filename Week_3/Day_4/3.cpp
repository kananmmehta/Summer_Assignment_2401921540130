#include <vector>
#include <stack>
#include <algorithm>

class Solution {
public:
    int largestRectangleArea(std::vector<int>& heights) {
        std::stack<int> s;
        int maxArea = 0;
        int n = heights.size();

        for (int i = 0; i <= n; i++) {
            int currentHeight = (i == n) ? 0 : heights[i];
            while (!s.empty() && currentHeight < heights[s.top()]) {
                int height = heights[s.top()];
                s.pop();
                int width = s.empty() ? i : (i - s.top() - 1);

                maxArea = std::max(maxArea, height * width);
            }
            s.push(i);
        }

        return maxArea;
    }
};
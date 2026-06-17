#include <vector>
#include <stack>
#include <unordered_map>

class Solution {
public:
    std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::unordered_map<int, int> nextGreaterMap;
        std::stack<int> s;
        for (int num : nums2) {
            while (!s.empty() && num > s.top()) {
                nextGreaterMap[s.top()] = num; 
                s.pop();                       
            }
            s.push(num); 
        }
        while (!s.empty()) {
            nextGreaterMap[s.top()] = -1;
            s.pop();
        }
        std::vector<int> ans;
        for (int num : nums1) {
            ans.push_back(nextGreaterMap[num]);
        }

        return ans;
    }
};
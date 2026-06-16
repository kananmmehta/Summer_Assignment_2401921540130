#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        // Create a map where:
        // Key (Label) -> a sorted string (e.g., "aet")
        // Value -> a list of original words (e.g., ["eat", "tea", "ate"])
        std::unordered_map<std::string, std::vector<std::string>> groups;

        // Go through each word in our input list
        for (std::string word : strs) {
            std::string sortedWord = word; 
            std::sort(sortedWord.begin(), sortedWord.end()); // Sort the letters alphabetically
            
            // Put the original word into its matching sorted group
            groups[sortedWord].push_back(word);
        }

        // Move everything from our map into a final vector list
        std::vector<std::vector<std::string>> result;
        for (auto pair : groups) {
            result.push_back(pair.second); // pair.second is the list of grouped words
        }

        return result;
    }
};
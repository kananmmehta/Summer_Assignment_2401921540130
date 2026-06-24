//2.Validate Binary Search Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root,nullptr,nullptr);
    }
private:
    bool validate(TreeNode* node,TreeNode* min,TreeNode* max){
        if(node==nullptr) return true;
        if(min != nullptr && node->val <= min->val) return false;
        if(max != nullptr && node->val >= max->val) return false;
        return validate(node->left,min,node) && validate(node->right,node,max);
    }
};
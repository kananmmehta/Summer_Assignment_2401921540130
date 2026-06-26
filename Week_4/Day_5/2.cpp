//2.Construct Binary Tree from Preorder and Inorder Traversal

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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> inMap;
        for(int i=0;i<inorder.size();i++){
            inMap[inorder[i]]=i;
        }
        TreeNode* root= buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inMap);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, int pStart, int pEnd, vector<int>& inorder, int iStart, int iEnd, map<int,int> inMap){
        if(pStart>pEnd || iStart>iEnd) return NULL;
        TreeNode* root = new TreeNode(preorder[pStart]);
        int iRoot = inMap[root->val];
        int numsLeft = iRoot-iStart;
        root->left = buildTree(preorder,pStart+1,pStart+numsLeft,inorder,iStart,iRoot-1,inMap);
        root->right = buildTree(preorder,pStart+numsLeft+1,pEnd,inorder,iRoot+1,iEnd,inMap);
        return root;
    }
};
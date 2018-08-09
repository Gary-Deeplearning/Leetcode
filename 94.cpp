/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorderWalk(root, res);
        return res;
    }
    
    void inorderWalk(TreeNode* root, vector<int>&res){
        if(!root)
            return;
        if (root->left)
            inorderWalk(root->left, res);
        res.push_back(root->val);
        if (root->right)
            inorderWalk(root->right, res);
    }
};
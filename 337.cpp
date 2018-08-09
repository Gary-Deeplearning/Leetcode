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
    int rob(TreeNode* root) {
        if (!root)
            return 0;
        return max(rob_father(root), rob_child(root));
        
    }
    int rob_father(TreeNode* node){
        if (!node)
            return 0;
        // 如果偷了此节点，就说明不能偷儿子节点
        return rob_child(node->left) + rob_child(node->right) + node->val;
    }
    
    int rob_child(TreeNode* node){
        // 不偷父节点，不代表就要偷儿节点
        if (!node)
            return 0;
        return rob(node->left) + rob(node->right);
    }
};
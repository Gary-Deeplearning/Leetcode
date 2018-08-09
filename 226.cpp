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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> tree;
        if (!root)
            return root;
        
        tree.push(root);
        while(!tree.empty()){
            TreeNode* pNode = tree.front();
            tree.pop();
            // 备份左节点
            TreeNode* pLeft = pNode->left;
            // 交换左右节点
            pNode->left = pNode->right;
            pNode->right = pLeft;
            
            // 新结点入队
            if (pNode->left)
                tree.push(pNode->left);
            if (pNode->right)
                tree.push(pNode->right);
        }
        return root;
    }
};
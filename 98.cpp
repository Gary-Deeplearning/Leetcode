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
    bool isValidBST(TreeNode* root) {
        if (!root)
            return true;
        vector<int> list;
        orderBST(root, list);
        for (int i = 1; i < list.size(); i++){
            if (list[i-1] >= list[i])
                return false;
        }
        return true;
    }
    void orderBST(TreeNode* root, vector<int> &list){
        if (!root)
            return;
        if (root->left){
            orderBST(root->left, list);
        }
        list.push_back(root->val);
        if (root->right){
            orderBST(root->right, list);
        }
    }
};
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        
        if(!root) 
            return res;
        
        DFS(root, res, to_string(root->val));
        return res;
    }
     
    // 深度优先搜索
    void DFS(TreeNode* root,vector<string> &res,string subPath){
        // 如果当前该节点为叶子结点，则此条路径已经遍历完，将路径添加到结果中，并返回
        if(root->left==NULL&&root->right==NULL){
            res.push_back(subPath);
            return;
        }
        
        // 左孩子非空
        if(root->left){
            DFS(root->left, res, subPath + "->" + to_string(root->left->val));
        }
        
        // 右孩子非空
        if(root->right){
            DFS(root->right, res, subPath + "->" + to_string(root->right->val));
        }
    }
};
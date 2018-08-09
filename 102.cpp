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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == nullptr)
            return result;
        std::deque<TreeNode*> dequeTreeNode;
        int count = 1;
        dequeTreeNode.push_back(root);
        
        while(dequeTreeNode.size()){
            int levelnum = dequeTreeNode.size();
            vector<int> sublist;
            
            for (int i = 0;i < levelnum; i++){
                // 出队
                TreeNode* node = dequeTreeNode.front();
                dequeTreeNode.pop_front();
                sublist.push_back(node->val);
                
                if (node->left)
                    dequeTreeNode.push_back(node->left);
                if (node->right)
                    dequeTreeNode.push_back(node->right);
            }
            result.push_back(sublist);
            
        }
        return result;
    }
};
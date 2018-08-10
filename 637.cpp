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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if (!root)
            return res;
        queue<TreeNode*> queTree;
        queTree.push(root);
        
        while(!queTree.empty()){
            // 目前这一层的节点个数
            int currSize = queTree.size();
            auto sum = 0.0;
            vector<int> currLevel(currSize);
            
            for (size_t i = 0; i < currSize; ++i){
                // 出队
                TreeNode* node = queTree.front();
                queTree.pop();
                sum += node->val;
                
                // 下一层的元素入队
                if (node->left)
                    queTree.push(node->left);
                if (node->right)
                    queTree.push(node->right);
            }
            res.push_back(sum / currSize);
        }
        return res;
    }
};
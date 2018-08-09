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
    int minDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        if (root->left == nullptr && root->right == nullptr)
            return 1;
        queue<TreeNode*> cur;
        cur.push(root);
        int min = 1;
        
        while(!cur.empty()){
            int n = cur.size();
            for (int i = 0; i < n; i++){
                TreeNode *temp;
                temp = cur.front();
                cur.pop();
                
                if (temp->left)
                   cur.push(temp->left);
                if (temp->right)
                    cur.push(temp->right);
                if (!temp->left && !temp->right)
                    return min;
            }
            min++;
        }
        return min;
    }
};
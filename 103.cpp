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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;

        if (!root)
            return res;
        stack<TreeNode*> s;
        s.push(root);

        int count = 1;
        auto flag = 0;
        while (!s.empty()) {
            size_t temp = 0;
            vector<TreeNode*> backup;
            vector<int> cur_res(count);
            if (!flag) {
                for (size_t i = 0; i < count; i++) {
                    TreeNode* p = s.top();
                    s.pop();
                    cur_res[i] = p->val;

                    if (p->left) {
                        backup.push_back(p->left);
                        temp++;
                    }
                    if (p->right) {
                        backup.push_back(p->right);
                        temp++;
                    }
                }
                for (size_t k = 0; k < backup.size(); ++k)
                    s.push(backup[k]);
                flag = 1;
            }
            else {
                for (size_t i = 0; i < count; i++) {
                    TreeNode* p = s.top();
                    s.pop();
                    cur_res[i] = p->val;
                    if (p->right) {
                        backup.push_back(p->right);
                        temp++;
                    }
                    if (p->left) {
                        backup.push_back(p->left);
                        temp++;
                    }
                }
                for (size_t k = 0; k < backup.size(); ++k)
                    s.push(backup[k]);
                flag = 0;
            }
            res.push_back(cur_res);
            count = temp;
        }
        /*for (size_t i = 0; i < res.size(); ++i) {
            for (size_t j = 0; j < res[i].size(); ++j) {
                cout << res[i][j] << " ";	
            }
            cout << endl;
        }*/		
        return res;
    }
};
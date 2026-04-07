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
    vector<vector<int>> levelOrder(TreeNode* root) {
    
        std::vector<vector<int>> res;
         if (!root) return  res;;
        std::queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty())
        {
            int level_size=Q.size();
              std::vector<int> level;
            for(int i=0;i<level_size;i++)
            {
            TreeNode*current=Q.front();
           
             level.push_back(current->val);
            if(current->left) Q.push(current->left);
            if(current->right) Q.push(current->right);
            Q.pop();
            }
            res.push_back(level);

        }
        return res;
    }
};



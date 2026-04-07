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
    vector<int> rightSideView(TreeNode* root) {
        std::vector<int> res;
        if(!root) return res;
        std::queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty())
        {
            int n= Q.size();
             std::vector<int> level;
            for(int i=0;i<n;i++)
            {
                TreeNode* current=Q.front();
              
                if(level.empty())
                {
                    level.push_back(current->val);
                     res.push_back(current->val);
                }
                if(current->right) Q.push(current->right);
                if(current->left) Q.push(current->left);
                Q.pop();
            }
          
            level.clear();
        }
        return res;
    }
};


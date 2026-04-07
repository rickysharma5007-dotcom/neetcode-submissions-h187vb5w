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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur = root;

        while (cur) {
            // both nodes lie in the left subtree
            if (p->val < cur->val && q->val < cur->val) {
                cur = cur->left;
            }
            // both nodes lie in the right subtree
            else if (p->val > cur->val && q->val > cur->val) {
                cur = cur->right;
            }
            // split point (or one node equals cur)
            else {
                return cur;
            }
        }

        return nullptr;
    }
};

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
    private:
    int index=0;
    std::unordered_map<int,int> mp;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
            for(int i=0;i<inorder.size();i++)
              mp[inorder[i]]=i;
            return helper(preorder,0,inorder.size()-1);
    }
    TreeNode* helper(std::vector<int>&preorder,int start,int end)
    {
        if(start>end)     return nullptr;
        int rootval=preorder[index++];
        TreeNode* newnode= new TreeNode(rootval);
        int mid=mp[rootval];
        newnode->left=helper(preorder,start,mid-1);
        newnode->right=helper(preorder,mid+1,end);
        return newnode;
    }
};

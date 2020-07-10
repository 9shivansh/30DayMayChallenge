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
    int depth = 0;
    int maxDepth(TreeNode* root) 
    {
        if(root == NULL)
        {
            return 0;
        }
        
        helper(root, 1);
        
        return depth;
    }
    
    void helper(TreeNode* root, int d)
    {
        depth = max(d, depth);
        if(root -> left)
        {
            helper(root -> left, d + 1);
        }
        
        if(root -> right)
        {
            helper(root -> right, d + 1);
        }
    }
};
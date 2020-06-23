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
    int count = 0;
    int countNodes(TreeNode* root) 
    {
        helper(root);
        return count;
    }
    
    void helper(TreeNode* root)
    {
        if(root)
        {
            if(root -> left)
            {
                helper(root -> left);
            }
            
            count = count + 1;
            
            if(root -> right)
            {
                helper(root -> right);
            }
        }
    }
};
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
    int minimum = INT_MAX;
    int minDepth(TreeNode* root) 
    {
        if(root)
        {
            helper(root, 1);
            return minimum;
        }
        
        return NULL;
    }
    
    void helper(TreeNode* root, int height)
    {
        if(root)
        {
            if(root -> left)
            {
                helper(root -> left, height + 1);
            }
            
            if(root -> right)
            {
                helper(root -> right, height + 1);
            }
            
            if(!root -> left && !root -> right)
            {
               minimum = min(minimum, height); 
            }
        }
    }
};
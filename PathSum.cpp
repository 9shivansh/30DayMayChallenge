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
    bool flag = false;
    
    bool hasPathSum(TreeNode* root, int sum) 
    {
        if(!root)
        {   
            return false;
        }
        
        helper(root, 0, sum);
        
        return flag;
    }
    
    void helper(TreeNode* root, int p, int sum)
    {
        p = p + root -> val;
        
        if(!root -> left && !root -> right)
        {
            if(p == sum)
            {
                flag = true;
                return;
            }
        }
        
        if(root -> left)
        {
            helper(root -> left, p, sum);
        }
        
        if(root -> right)
        {
            helper(root -> right, p, sum);
        }
    }
    
    
};
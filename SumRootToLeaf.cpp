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
    
    int sum = 0;
    
    int sumNumbers(TreeNode* root) 
    {
        if(root == NULL)
        {
            return 0;
        }
        
        helper(root, 0);
        
        
        return sum;
    }
    
    void helper(TreeNode* root, int curr)
    {
        int val = (curr * 10) + root -> val;
        
        if(root -> left)
        {
            helper(root -> left, val);
        }
        
        if(root -> right)
        {
            helper(root -> right, val);
        }
        
        if(!root -> left && !root -> right)
        {
            sum = sum + val;
        }
    }
    
};
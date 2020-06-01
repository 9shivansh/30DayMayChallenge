class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) 
    {
        if(root)
        {
            helper(root);
        }
        
        return root;
        
    }
    
    int sum = 0;
    
    void helper(TreeNode* root)
    {
        if(root -> right)
        {
            helper(root -> right);
        }
        
        sum = root -> val = root -> val + sum;
        
        if(root -> left)
        {
            helper(root -> left);
        }
        
    }
};
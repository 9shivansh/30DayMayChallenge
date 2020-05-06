class Solution {
public:
    vector<int> a;
    vector<int> inorderTraversal(TreeNode* root) 
    {
        if(root)
        {
            if(root -> left)
            {
                inorderTraversal(root -> left);
            }
        
            a.push_back(root -> val);
        
            if(root -> right)
            {
                inorderTraversal(root -> right);
            }
        
        }
            
        return a;
        
    }
    
};
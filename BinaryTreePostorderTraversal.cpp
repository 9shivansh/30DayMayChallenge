class Solution {
public:
    
    vector<int> a;
    vector<int> postorderTraversal(TreeNode* root) 
    {
        if(root)
        {
            if(root -> left)
            {
                postorderTraversal(root -> left);
            }
            
            if(root -> right)
            {
                postorderTraversal(root -> right);
            }
            
            a.push_back(root -> val);
        }
        
        return a;
    }
};
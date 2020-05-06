class Solution {
public:
    vector<int> a;
    vector<int> preorderTraversal(TreeNode* root) 
    {
        if(root)
        {
            a.push_back(root -> val);
            
            if(root -> left)
            {
                preorderTraversal(root -> left);
            }
            if(root -> right)
            {
                preorderTraversal(root -> right);
            }
        }
        
        return a;
    }
};
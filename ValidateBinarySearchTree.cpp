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
    
    vector<int> preorder;
    
    bool isValidBST(TreeNode* root) 
    {
        helper(root);
        
        int size = preorder.size();
        
        for(int i = 1; i < size; i++)
        {
            if(preorder[i] <= preorder[i - 1])
            {
                return false;
            }
        }
        
        return true;
        
        
    }
    
    void helper(TreeNode* root)
    {
        if(root)
        {
            if(root -> left)
            {
                helper(root -> left);
            }
            
            preorder.push_back(root -> val);
            
            if(root -> right)
            {
                helper(root -> right);
            }
        }
        
        //return true;
    }
    
    
};
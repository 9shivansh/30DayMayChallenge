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
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        if(root == NULL)
        {
            root = new TreeNode(val);
            return root;
        }
        
        helper(root, val);
        
        return root;
        
        
        
    }
    
    void helper(TreeNode* root, int val)
    {
        if(root)
        {
            if(root -> val > val)
            {
                if(root -> left == NULL)
                {
                    root -> left = new TreeNode(val);
                }

                else
                {
                    helper(root -> left, val);
                }
            }

            if(root -> val < val)
            {
                if(root -> right == NULL)
                {
                    root -> right = new TreeNode(val);
                }
                
                else
                {
                    helper(root -> right, val);
                }
            }
        }
        
        
    }
};
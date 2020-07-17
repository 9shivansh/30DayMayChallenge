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
    vector<int> inorder;
    vector<int> inorderTraversal(TreeNode* root) 
    {
        if(root == NULL)
        {
            return inorder;
        }
        
        helper(root);
        return inorder;
    }
    
    
    void helper(TreeNode* root)
    {
        if(root)
        {
        
            if(root -> left)
            {
                helper(root -> left);
            }

            inorder.push_back(root -> val);

            if(root -> right)
            {
                helper(root -> right);
            }
        }
    }
};
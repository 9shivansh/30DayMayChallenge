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
    TreeNode* bstToGst(TreeNode* root) 
    {
        TreeNode* head = root;
        traverse(root);
        
        return root;
    }
    
    void traverse(TreeNode* root)
    {
        if(root)
        {
            if(root -> right)
            {
                traverse(root -> right);
            }
            
            root -> val = sum + root -> val;
            sum = root -> val;
            
            if(root -> left)
            {
                traverse(root -> left);
            }
        }
    }
};
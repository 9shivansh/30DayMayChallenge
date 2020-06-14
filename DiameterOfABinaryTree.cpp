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
    
    int height(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        
        int Lheight = height(root -> left);
        int Rheight = height(root -> right);
        
        return max(Lheight, Rheight) + 1;
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) 
    {
        
        if(!root)
        {
            return 0;
        }
        
        int LHeight = height(root -> left);
        int RHeight = height(root -> right);
        
        int LDiameter = diameterOfBinaryTree(root -> left);
        int RDiameter = diameterOfBinaryTree(root -> right);
        
        int finish = max(LHeight + RHeight, max(LDiameter, RDiameter));
        
        
        return finish;
        
    }
};
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
    bool flag = true;
    bool isBalanced(TreeNode* root) 
    {
        int result = height(root);
        return flag;
    }
    
    
    int height(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int Lheight = height(root -> left);
        int Rheight = height(root -> right);
        
        if(abs(Lheight - Rheight) > 1)
        {
            flag = false;
        }
        
        return max(Lheight, Rheight) + 1;
    }
};


// we need to find height of right subtree and left subtree
// if(diff > 1) => return false
// else go to left and right
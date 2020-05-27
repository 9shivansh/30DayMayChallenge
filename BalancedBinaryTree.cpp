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
        
        int result = findHeight(root);
        return flag;
        
        
    }
    
    int findHeight(TreeNode* root)
    {
        if(root)
        {
            int Lheight = findHeight(root -> left) + 1;
            int Rheight = findHeight(root -> right) + 1;
            cout << "Left Height " << Lheight << endl;
            cout << "Right Height " << Rheight << endl; 
            
            if(abs(Lheight - Rheight) > 1)
            {
                flag = false;
            }
            
            return max(Lheight, Rheight);
        }
        
        return 0;
        
    }
};
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
    
    vector<int> values;
    bool isValidBST(TreeNode* root) 
    {
        if(root)
        {
            if(root -> left)
            {
                isValidBST(root -> left);
            }
            
            values.push_back(root -> val);
            
            if(root -> right)
            {
                isValidBST(root -> right);
            }
        }
        
        return helper(values);
        
    }
    
    bool helper(vector<int> values)
    {
        if(values.size() == 0)
        {
            return true;
        }
        if(values.size() == 1)
        {
            return true;
        }
        for(int i = 1; i < values.size(); i++)
        {
            if(values[i] <= values[i - 1])
            {
                return false;
            }
        }
        
        return true;
    }
};
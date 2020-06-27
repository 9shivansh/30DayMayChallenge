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
    int kthSmallest(TreeNode* root, int k) 
    {
        helper(root);
        
        int size = values.size();
        
        return values[k - 1];
    }
    
    void helper(TreeNode* root)
    {
        if(root)
        {
            if(root -> left)
            {
                helper(root -> left);
            }
            
            values.push_back(root -> val);
            
            if(root -> right)
            {
                helper(root -> right);
            }
        }
    }
};
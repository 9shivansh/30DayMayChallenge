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
    
    bool isSubtree(TreeNode* s, TreeNode* t) 
    {
        vector<int> result1;
        vector<int> result2;
        
        helper(s, result1);
        helper(t, result2);
        
        int size1 = result1.size();
        int size2 = result2.size();
        
        
        for(int i = size2 - 1; i > -1; i--)
        {
            cout << result1[i] << " " << result2[i] << endl;
            if(result1[i] != result2[i])
            {
                return false;
            }
        }
        
        return true;
        
        
    }
    
    void helper(TreeNode* root, vector<int>& arr)
    {
        if(root)
        {
            if(root -> left)
            {
                helper(root -> left, arr);
            }
            else
            {
                arr.push_back(-1);
            }
            
            arr.push_back(root -> val);
            
            if(root -> right)
            {
                helper(root -> right, arr);
            }
            else
            {
                arr.push_back(-1);
            }
        }
    }
};
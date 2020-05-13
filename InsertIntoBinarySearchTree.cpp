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
        if(root)
        {
            insert(root, val);
            return root;
        }
        else
        {
            return new TreeNode(val);
        }
        
    }
    
    void insert(TreeNode* root, int val)
    {
        
        if(root)
        {
            cout << "root ! NULL" << endl;
            if(root -> val < val)
            {
                if(root -> right == NULL)
                {
                    root -> right = new TreeNode(val);
                }
                else
                {
                    insert(root -> right, val);
                }
            }
            else
            {
                if(root -> left == NULL)
                {
                    root -> left = new TreeNode(val);
                }
                else
                {
                    insert(root -> left, val);
                }
            }
        } 
        
    }
};
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
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        if(root == NULL)
        {
            return NULL;
        }
        
        if(root -> val > key)
        {
            root -> left = deleteNode(root -> left, key);
        }
        
        if(root -> val < key)
        {
            root -> right = deleteNode(root -> right, key);
        }
        
        if(root -> val == key)
        {
            if(numberOfChildren(root) == 0)
            {
                delete(root);
                return NULL;
            }
            
            else if(numberOfChildren(root) == 1)
            {
                TreeNode* temp;
                
                if(root -> left)
                {
                    temp = root -> left;
                    delete(root);
                    return temp;
                }
                
                if(root -> right)
                {
                    temp = root -> right;
                    delete(root);
                    return temp;
                }
            }
            
            else if(numberOfChildren(root) == 2)
            {
                TreeNode* temp = root -> right;
                while(temp -> left)
                {
                    temp = temp -> left;
                }
                
                root -> val = temp -> val;
                root -> right = deleteNode(root -> right, temp -> val);
                    
            }
        }
        
        return root;
    }
    
    
    int numberOfChildren(TreeNode* node)
    {
        if(node -> left && node -> right)
        {
            return 2;
        }
        
        else if(node -> left || node -> right)
        {
            return 1;
        }
        
        return 0;
    
    }
};
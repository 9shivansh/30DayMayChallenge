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
class BSTIterator {
public:
    vector<int> temp;
    int index = 0;
    
    BSTIterator(TreeNode* root) 
    {
        helper(root);
        //size = temp.size();
    }
    
    void helper(TreeNode* root)
    {
        if(root)
        {
            if(root -> left)
            {
                helper(root -> left);
            }
            
            temp.push_back(root -> val);
            
            if(root -> right)
            {
                helper(root -> right);
            }
        }
    }
    /** @return the next smallest number */
    int next() 
    {
        return temp[index++];
        
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() 
    {
        if(index < temp.size())
        {
            return true;
        }
        
        return false;
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

class Solution {
public:
    bool flag = false;
    bool hasPathSum(TreeNode* root, int sum) 
    {
        if(root == NULL)
        {
            return flag;
        }
        if(root -> left == NULL && root -> right == NULL)
        {
            if(root -> val == sum)
            {
                flag = true;
            }
        }
        
        if(root -> left)
        {
            hasPathSum(root -> left, sum - root -> val);
        }
        
        if(root -> right)
        {
            hasPathSum(root -> right, sum - root -> val);
        }
        
        return flag;
    }
};
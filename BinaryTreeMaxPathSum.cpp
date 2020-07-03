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
    int maxSum = INT_MIN;
    int maxPathSum(TreeNode* root) 
    {
        if(root == NULL)
        {
            return 0;
        }
        helper(root);
        
        return maxSum;
    }
    
    
    int helper(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int Lsum = helper(root -> left);
        int Rsum = helper(root -> right);
        
        cout << Lsum << " " << Rsum << endl;
        
        if(Lsum < 0)
        {
            Lsum = 0;
        }
        
        if(Rsum < 0)
        {
            Rsum = 0;
        }
        
        int a = root -> val + Lsum + Rsum;
        maxSum = max(maxSum, a);
        
        return max(Lsum, Rsum) + root -> val;
    }
};
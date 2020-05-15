class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root== NULL)
            return true;
        int l,r;
        l = maxDepth(root->left);
        r = maxDepth(root->right);
        if(abs(r-l) == 1 || abs(r-l) == 0){
            return isBalanced(root->left) && isBalanced(root->right);
        }
        else
            return false;
    }    
public:
    int maxDepth(TreeNode* root) {
       if(root == NULL)
           return 0;
        else 
            return (1+max(maxDepth(root->left),maxDepth(root->right)));
    }

};
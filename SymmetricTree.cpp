class Solution {
public:
    bool isSym(TreeNode* Left, TreeNode* Right) {
        if ((Left == NULL) and (Right == NULL)) return true;
        if (Left==NULL ^ Right==NULL) return false;
        if (Left->val != Right->val) return false;
        return isSym(Left->left, Right->right) and isSym(Left->right, Right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (root)
            return isSym(root->left, root->right);
        else
            return true;
    }
    
};
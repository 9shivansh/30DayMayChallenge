class Solution {
public:
    int a(TreeNode* root, int val){        // evaluation function
         if(!root) return 0;    //base case and also when child is null
       else
            val =  ((2*val)+root->val);  // binary to decimal step wise
        if(!root->left && !root->right)  // leaf node
            return val;
        return a(root->left,val)+a(root->right,val);      // calculate sum of both left and right child node
        
    }
    int sumRootToLeaf(TreeNode* root) {   // main function
       return a(root,0);
    }
};
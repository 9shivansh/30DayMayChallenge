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
    int sumEvenGrandparent(TreeNode* root) {
        if(root == NULL)
            return 0;
        int sum = 0;
        if(root->val % 2 == 0){
            sum += sumofchild(root->left); // find the sum of all grandchildrens of a node which has even value.
            sum += sumofchild(root->right); // find the sum of all grandchildrens of a node.
        }
        
         // we need to return this sum and recursively do the same for left and right subtrees.
        return sum + sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
    }
    
    
    int sumofchild(TreeNode* root){
        if(root == NULL) return 0;
        int sum = 0;
        if(root->left) sum += root->left->val;
        if(root->right) sum += root->right->val;
        return sum;
    }
};
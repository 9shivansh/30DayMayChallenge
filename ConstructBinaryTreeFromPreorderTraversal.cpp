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
    TreeNode* help(vector<int>& v,int l,int r)
{
    if(l==r)
    {
        TreeNode* x=new TreeNode(v[l]);
        return x;
    }
    if(l>r)
    {
        return NULL;
    }
    else
    {
        int c=l;
        TreeNode* x=new TreeNode(v[l]);
        int mid=l+1;
        while(mid<=r&&v[mid]<v[l])
        {
            mid++;
        }
        x->left=help(v,l+1,mid-1);
        x->right=help(v,mid,r);
        return x;
    }
}
TreeNode* bstFromPreorder(vector<int>& preorder)
{
    return help(preorder,0,preorder.size()-1);
}
};
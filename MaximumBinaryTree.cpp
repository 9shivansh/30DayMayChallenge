class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& A) {
        stack<TreeNode*> s;
        int maxn = 0;
        TreeNode *root = NULL;
        for(int i = 0; i < A.size(); i++)
        {
            TreeNode* node = new TreeNode(A[i]);
            if(A[i] > maxn)
            {
                maxn = A[i]; root = node;
            }
            while(!s.empty())
            {
                if(s.top()->val > A[i])
                {
                    s.top()->right = node;
                    break;
                }
                else
                {
                    node->left = s.top();
                    s.pop();
                }
            }
            s.push(node);
        }
        return root;
    }
};
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q; q.push(root);
        while(!q.empty())
        {
            int s=q.size(); vector<int> a;
            for(int i=0;i<s;i++)
            {
                TreeNode *b=q.front(); q.pop();
                if(b->left) q.push(b->left);
                if(b->right) q.push(b->right);
                a.push_back(b->val);
            }
            ans.push_back(a); a.clear();
            
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> result;
        
        
        if(root == NULL)
        {
            return result;
        }
        
        queue<TreeNode*> que;
        
        
        que.push(root);
        
        
        while(!que.empty())
        {
            int size = que.size();
            
            vector<int> temp;
            
            for(int i = 0; i < size; i++)
            {
                TreeNode* current = que.front();
                que.pop();
                temp.push_back(current -> val);
                
                if(current -> left)
                {
                    que.push(current -> left);
                }
                
                if(current -> right)
                {
                    que.push(current -> right);
                }
            }
            
            result.emplace_back(temp);
            
        }
        
        
        return result;
        
    }
};
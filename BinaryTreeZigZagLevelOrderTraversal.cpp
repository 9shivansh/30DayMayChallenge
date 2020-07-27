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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> result;
        
        if(root == NULL)
        {
            return result;
        }
        
        queue<TreeNode*> que;
        
        int count = 0;
        
        que.push(root);
        
        while(!que.empty())
        {
            int size = que.size();
            
            vector<int> temp;
            
            for(int i = 0; i < size; i++)
            {
                TreeNode* curr = que.front();
                
                temp.push_back(curr -> val);
                
                que.pop();
                
                if(curr -> left)
                {
                    que.push(curr -> left);
                }
                    
                if(curr -> right)
                {
                    que.push(curr -> right);
                }
                 
            }
            
            if(count % 2 != 0)
            {
                flip(temp);
            }
            
            result.emplace_back(temp);
            
            count = count + 1;
            
        }
        
        return result;
        
    }
    
    void flip(vector<int>& temp)
    {
        int size = temp.size();
        
        for(int i = 0; i < size / 2; i++)
        {
            swap(temp[i], temp[size - 1 - i]);
        }
    }
};
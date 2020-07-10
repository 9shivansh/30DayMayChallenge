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
    bool isSymmetric(TreeNode* root) 
    {
        if(root == NULL)
        {
            return true;
        }
        
        queue<TreeNode*> que;
        
        que.push(root);
        
        
        while(!que.empty())
        {
            int size = que.size();
            vector<int> temp;
            
            for(int i = 0; i < size; i++)
            {
                auto curr = que.front();
                que.pop();
                
                if(curr)
                {
                    temp.push_back(curr -> val);
                
                    
                    
                    que.push(curr -> left);
                    

                    
                    que.push(curr -> right);
                    
                }
                
                else
                {
                    temp.push_back(-1);
                }
                
            }
            
            
            for(int i = 0; i < temp.size() / 2; i++)
            {
                cout << temp[i] << " " << temp[temp.size() - 1 - i] << endl;
                if(temp[i] != temp[temp.size() - 1 - i])
                {
                    return false;
                }
            }
        }
        
        return true;
        
    }
};
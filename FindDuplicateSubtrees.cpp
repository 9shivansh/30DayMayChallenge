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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) 
    {   
        vector<TreeNode*> result;
        unordered_map<string, int> map;
        
        string a = merkel(root, map, result);
        
        return result;
    }
    
    string merkel(TreeNode* root, unordered_map<string, int>& map, vector<TreeNode*>& result)
    {
        if(root == NULL)
        {
            return "#";
        }
        
        string left = merkel(root -> left, map, result);
        string middle = to_string(root -> val);
        string right = merkel(root -> right, map, result);
        
        string path = left + right + middle;
        
        if(map.find(path) != map.end())
        {
            map[path]++;
        }
        
        else
        {
            map[path] = 1;
        }
        
        if(map[path] == 2)
        {
            result.push_back(root);
        }
        
        
        return path;
    }
};
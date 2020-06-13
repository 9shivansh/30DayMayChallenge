/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> result;
    vector<int> preorder(Node* root) 
    {
        if(root)
        {
            result.push_back(root -> val);
            
            int size = root -> children.size();
            
            for(int i = 0; i < size; i++)
            {
                preorder(root -> children[i]);
            }
        }
        
        return result;
        
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        if(root == NULL)
        {
            return NULL;
        }
        
        queue<Node*> que;
        
        
        que.push(root);
        
        while(!que.empty())
        {
            int size = que.size();
            
            Node* current;
            
            for(int i = 0; i < size; i++)
            {
                current = que.front();
                que.pop();
                
                current -> next = que.front();
                
                
                if(current -> left)
                {
                    que.push(current -> left);
                }
                
                if(current -> right)
                {
                    que.push(current -> right);
                }
                
            }
            
            current -> next = NULL;
            
            
            
        }
        
        return root;
        
    }
};
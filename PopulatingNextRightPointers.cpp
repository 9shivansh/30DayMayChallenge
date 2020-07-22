
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
            
            Node* curr;
            
            for(int i = 0; i < size; i++)
            {
                curr = que.front();
                
                que.pop();
                
                curr -> next = que.front();
                
                if(curr -> left)
                {
                    que.push(curr -> left);
                }
                
                if(curr -> right)
                {
                    que.push(curr -> right);
                }
                
                //curr = curr -> next;
            }
            
            curr -> next = NULL;
        }
        
        return root;
    }
};
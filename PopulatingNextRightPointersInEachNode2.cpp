class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return NULL;
        queue<Node*> q;
        q.push(root);
        Node* temp;
        while (!q.empty()){
            for (int i=q.size(); i>0; i--){
                temp = q.front();
                q.pop();
                if (i!=1){
                    temp->next = q.front();
                }
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
        }
        return root;
    }
};
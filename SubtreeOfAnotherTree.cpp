class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
       if (s == NULL){ // Main tree null check
           return false;
       }
       if (t == NULL){ // subtree null check
           return true;
       }
       if(isSimilar(s,t)){ // check if two are similar
           return true;
       }
    return isSubtree(s->left,t) || isSubtree(s->right,t); //check recursively for left or right subbtree
       
    }
    bool isSimilar(TreeNode* s, TreeNode* t){
        if(s==NULL && t == NULL){
            return true;
        }
        if(s==NULL || t == NULL){
            return false;
        }
        
    return (s->val==t->val &&
            (isSimilar(s->left,t->left)) &&
            (isSimilar(s->right,t->right)));
    }
};


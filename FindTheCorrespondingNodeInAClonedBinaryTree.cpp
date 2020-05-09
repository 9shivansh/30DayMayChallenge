
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        TreeNode* a = NULL;
            
        
        if(original != NULL)
        {
            if(original == target)
            {
                return cloned;
            }
            
            
            
            
            else
            {
                if(original -> left)
                {
                    a = getTargetCopy(original -> left, cloned -> left, target);   
                }
                
                if(a)
                {
                    return a;
                }
               
                if(original -> right)
                {
                    a = getTargetCopy(original ->  right, cloned -> right, target);
                }
                    
            }
        }
        
        return a;
    }
};


class Solution {
public:
    int globalSum = 0;
    int maximumDepth = 1;
    
    void findingDepth(TreeNode* root, int depth, int sum)
    {
        cout << root -> val << " root -> val" << endl;
        
        sum = sum + root -> val;
        
        cout << sum << " sum value" << endl;
        
        if(depth  == maximumDepth)
        {
            globalSum = globalSum + root -> val;
        }
        
        if(depth > maximumDepth)
        {
            globalSum = root -> val;
            maximumDepth = depth;
        }
        
        if(root -> left)
        {
            findingDepth(root -> left, depth + 1, sum);
        }
        
        if(root -> right)
        {
            findingDepth(root -> right, depth + 1, sum);
        }
        
        cout << globalSum << " global Sum" << endl;
        cout << maximumDepth << " maximumDepth" << endl;
        
        
        
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        findingDepth(root, 1, 0);
        
        return globalSum;
        
    }
};


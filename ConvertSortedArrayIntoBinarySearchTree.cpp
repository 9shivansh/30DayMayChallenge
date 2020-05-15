class Solution {
public:
    
    TreeNode* BST(vector<int>&nums, int start, int end){
        
        if(start>end) return NULL;
        
        int mid = (start+end)/2;
        
        TreeNode* newNode = new TreeNode(nums[mid]);
        newNode->left = BST(nums,start,mid-1);
        newNode->right = BST(nums,mid+1,end);
        
        return newNode;
        
        
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size();
        
        return BST(nums, 0, n-1);
        
    }
};
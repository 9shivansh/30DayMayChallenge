class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        int ans=nums[0];
        
        if(nums[0]<nums[n-1]) return ans;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(nums[mid]<nums[0])
            {
                ans=nums[mid]; high=mid-1;
            }
            
            else low=mid+1;
        }
        
        return ans;
    }
    
};
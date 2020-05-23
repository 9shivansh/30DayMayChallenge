class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1 )
            
            return nums[0];
        
        int start = 0 , end = nums.size()-1;
        
        int n = nums.size();
        
        while(start <= end)
            
        {
            int mid = start + (end - start)/2;
            
            int next = (mid + 1) % n;
            
            int prev = (mid - 1 + n ) % n; 
            
            if(nums[next] >= nums[mid] && nums[prev] >= nums[mid])
                
                return nums[mid];
            
            if(nums[mid] >= nums[end])
                
                start = mid + 1;
            
            else
                
                end = mid -1;
            
        }
        
        return -1;
    }
};
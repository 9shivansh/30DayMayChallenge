class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int start = 0;
        int end = nums.size() - 1;
        
        
        while(start < end)
        {
            int mid = (start + end) / 2;
            
            if(nums[mid] == target)
            {
                return mid;
            }
            
            if(nums[mid] < target)
            {
                start = mid + 1;
            }
            
            if(nums[mid] > target)
            {
                end = mid;
            }
        }
        
        
        if(target <= nums[start])
        {
            return start;
        }
        
        return start + 1;
        
    }
};
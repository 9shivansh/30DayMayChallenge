class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int size = nums.size();
        
        int start = 0;
        int end = size - 1;
        
        while(start <= end)
        {
            int mid = (start + end) / 2;
            
            if(nums[mid] == target)
            {
                return mid;
            }
            
            if(nums[mid] > target)
            {
                end = mid - 1;
            }
            
            if(nums[mid] < target)
            {
                start = mid + 1;
            }
        }
        
        
        return start;
        
    }
};
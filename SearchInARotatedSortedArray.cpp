class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start = 0;
        int end = nums.size() - 1;
        int size = nums.size();
        
        
        
        while(start < end)
        {
            int mid = (start + end) / 2;
            
            if(nums[mid] > nums[end])
            {
                start = mid + 1;
            }
            
            if(nums[mid] < nums[end])
            {
                end = mid;
            }
            
        }
        
        
       int pivot = start;
        
        start = 0;
        
        end = size - 1;
        
        
        while(start <= end)
        {
            int mid = (start + end) / 2;
            int realMid = (mid + pivot) % size;
            
            
            if(nums[realMid] == target)
            {
                return realMid;
            }
            
            if(nums[realMid] < target)
            {
                start = mid + 1;
            }
            
            else
            {
                end = mid - 1;
            }
            
        }
        
        return -1;
        
        
    }
};
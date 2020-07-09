class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int size = nums.size();
        
        vector<int> result;
        result.push_back(-1);
        result.push_back(-1);
        
        int start = 0;
        int end = size - 1;
        
        if(size == 0)
        {
            return result;
        }
        
        while(start < end)
        {
            int mid = (start + end) / 2;
            
            if(nums[mid] < target)
            {
                start = mid + 1;
            }
            
            else
            {
                end = mid;
            }
        }
        
        if(nums[start] != target)
        {
            return result;
        }
        
        int first = start;
        end = size - 1;
        
        while(start < end)
        {
            int mid = (start + end) / 2;
            
            if(nums[mid] > target)
            {
                end = mid;
            }
            
            else
            {
                start = mid + 1;
            }
        }
        
        result[0] = first;
        
        if(nums[start] == target)
        {
            result[1] = start;
        }
        
        else
        {
            result[1] = start - 1;
        }
        
        return result;
        
    }
};
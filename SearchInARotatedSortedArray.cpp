class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int size = nums.size();
        
        int start = 0;
        int end = size - 1;
        
        while(start < end)
        {
            int mid = (start + end) / 2;
            
            if(nums[mid] > nums[end])
            {
                start = mid + 1;
            }
            
            else
            {
                end = mid;
            }
        }
        
        
        cout << start << endl;
        
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
            
            if(nums[realMid] > target)
            {
                end = mid - 1;
            }
            
            else
            {
                start = mid + 1;
            }
            
            
        }
        
        
        return -1;
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int size = nums.size();
        
        int low = 0;
        int mid = 0;
        int high = size - 1;
        
        
        
        
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                mid = mid + 1;
                low = low + 1;
            }
            
            else if(nums[mid] == 1)
            {
                mid = mid + 1;
            }
            
            else if(nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high = high - 1;
            }
        }
        
    }
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        
        int size = nums.size();
        
        
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                if(nums[i] == nums[i + 1])
                {
                    return nums[i];
                }
            }
            
            else if(i == size - 1)
            {
                if(nums[i] == nums[i - 1])
                {
                    return nums[i];
                }
            }
            
            else
            {
                if(nums[i] == nums[i - 1] || nums[i] == nums[i + 1])
                {
                    return nums[i];
                }
            }
        }
        
        return 0;
        
        
        
    }
};
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int first = INT_MAX;
        int second = INT_MAX;
        int third = INT_MAX;
        
        int size = nums.size();
        
        
        for(int i = 0; i < size; i++)
        {
            if(nums[i] <= first)
            {
                first = nums[i];
            }
            
            else if(nums[i] <= second)
            {
                second = nums[i];
            }
            
            else if(nums[i] <= third)
            {
                third = nums[i];
                return true;
            }
        }
        
        
        return false;
    }
};
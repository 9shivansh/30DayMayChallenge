class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int firstMax = INT_MIN;
        int secondMax = INT_MIN;
        int index;
        
        
        int size = nums.size();
        
        if(size == 0)
        {
            return 0;
        }
        
        if(size == 1)
        {
            return 0;
        }
        
        for(int i = 0; i < size; i++)
        {
            if(nums[i] > firstMax)
            {
                secondMax = firstMax;
                firstMax = nums[i];
                index = i;
                
            }
            
            else
            {
                if(nums[i] > secondMax)
                {
                    secondMax = nums[i];
                }
            }
        }
        
        if(firstMax >= secondMax * 2)
        {
            return index;
        }
        
        return -1;
        
    }
};
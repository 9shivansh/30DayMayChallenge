class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int size = nums.size();
        int maxCount = 0;
        int count = 0;
        
        for(int i = 0; i < size; i++)
        {
            if(nums[i] == 1)
            {
                count = count + 1;
                maxCount = max(count, maxCount);
            }
            
            else
            {
                count = 0;
            }
        }
        
        return maxCount;
        
    }
};
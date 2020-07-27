class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int size = nums.size();
        
        int maximum = 0;
        
        for(int i = 0; i <= maximum; i++)
        {
            maximum = max(i + nums[i], maximum);
            
            if(maximum >= size - 1)
            {
                return true;
            }
        }
        
        return false;
    }
};
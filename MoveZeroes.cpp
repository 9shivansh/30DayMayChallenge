class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        
        int i = 0;
        int j = 0;
        int size = nums.size();
        
        
        for(int i = 0; i < size; i++)
        {
            
            if(nums[i] != 0)
            {
                nums[j++] = nums[i];
            }
        }
        
        for(int index = j; index < size; index++)
        {
            nums[index] = 0;
        }
        
    }
};
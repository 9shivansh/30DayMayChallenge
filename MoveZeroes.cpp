class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i = 0;
        
        int size = nums.size();
        
        for(int p = 0; p < size; p++)
        {
            if(nums[p] != 0)
            {
                nums[i++] = nums[p];
            }
        }
        
        for(int k = i; k < size; k++)
        {
            nums[k] = 0;
        }
    }
};
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int size = nums.size();
        
        if(size == 0)
        {
            return nums;
        }
        
        if(size == 1)
        {
            return nums;
        }
        
        for(int i = 1; i < size; i++)
        {
            nums[i] = nums[i - 1] + nums[i];
        }
        
        return nums;
        
    }
};
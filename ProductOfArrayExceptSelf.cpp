class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int size = nums.size();
        
        vector<int> left(size, 1);
        vector<int> right(size, 1);
        
        left[0] = nums[0];
        right[size - 1] = nums[size - 1];
        
        
        for(int i = 1; i < size; i++)
        {
            left[i] = nums[i] * left[i - 1];
            right[size - 1 - i] = right[size - i] * nums[size - 1 - i];
        }
        
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                nums[i] = right[i + 1];
            }
            
            else if(i == size - 1)
            {
                nums[i] = left[size - 2];
            }
            
            else
            {
                nums[i] = left[i - 1] * right[i + 1];
            }
        }
        
        return nums;
    }
};
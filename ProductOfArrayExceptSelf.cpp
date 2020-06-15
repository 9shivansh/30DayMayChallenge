class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        
        int size = nums.size();
        
        vector<int> left(nums.size(), 0);
        vector<int> right(nums.size(), 0);
        
        vector<int> result(size, 0);
        
        
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                left[i] = nums[i];
                right[size - 1 - i] = nums[size - 1 - i];
            }
            
            else
            {
                left[i] = left[i - 1] * nums[i];
                right[size - 1 - i] = nums[size - 1 - i] * right[size - i];
            }
        }
        
        
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                result[i] = right[i + 1];
            }
            
            else if(i == size - 1)
            {
                result[i] = left[i - 1];
            }
            
            else
            {
                result[i] = left[i - 1] * right[i + 1];
            }
        }
        
        return result;
        
    }
};
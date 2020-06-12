class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int index = 1;
        
        
        
        
        int size = nums.size();
        
        
        if(size == 0)
        {
            return 0;
        }
        
        
        
        for(int i = 1; i < size; i++)
        {
            if(nums[i] != nums[i - 1])
            {
                nums[index++] = nums[i];
            }
        }
        
        return index;
        
        
    }
};
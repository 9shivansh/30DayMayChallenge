class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 1;
        
        int count = 1;
        
        int size = nums.size();
        
        if(size == 0 || size == 1)
        {
            return size;
        }
        
        for(int k = 1; k < size; k++)
        {
            if(nums[k] != nums[k - 1])
            {
                nums[i++] = nums[k];
                count = count + 1;
            }
        }
        
        return count;
        
    }
};
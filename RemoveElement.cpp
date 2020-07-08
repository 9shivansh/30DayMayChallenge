class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int size = nums.size();
        
        int start = 0;
        
        for(int i = 0; i < size; i++)
        {
            if(nums[i] != val)
            {
                nums[start] = nums[i];
                start = start + 1;
            }
        }
        
        return start;
        
    }
};
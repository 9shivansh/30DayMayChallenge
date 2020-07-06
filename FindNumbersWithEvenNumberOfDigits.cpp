class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int size = nums.size();
        
        
        int count = 0;
        
        for(int i = 0; i < size; i++)
        {
            if(nums[i] > 9 && nums[i] < 100)
            {
                count = count + 1;
            }
            
            else if(nums[i] > 999 && nums[i] < 10000)
            {
                count = count + 1;
            }
            
            else if(nums[i] == 100000)
            {
                count = count + 1;
            }
        }
        
        return count;
        
    }
};
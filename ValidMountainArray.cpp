class Solution {
public:
    bool validMountainArray(vector<int>& nums) 
    {
        int size = nums.size();
        
        int index = -1;
        
        if(size < 2)
        {
            return false;
        }
        
        for(int i = 1; i < size - 1; i++)
        {
            if(nums[i] > nums[i + 1] && nums[i] > nums[i - 1])
            {
                index = i;
                break;
            }
        }
        
        if(index == -1)
        {
            return false;
        }
        
        int check1;
        int check2;
        
        for(int i = 0; i < index; i++)
        {
            if(nums[i] < nums[i + 1])
            {
                check1 = 1;
            }
            else
            {
                check1 = 0;
                break;
            }
        }
        
        for(int i = index; i < size - 1; i++)
        {
            if(nums[i] > nums[i + 1])
            {
                check2 = 1;
            }
            else
            {
                check2 = 0;
                break;
            }
        }
        
        if(check1 && check2)
        {
            return true;
        }
        
        return false;
            
    }
};
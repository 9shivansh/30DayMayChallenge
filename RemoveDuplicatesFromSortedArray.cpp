class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int size = nums.size();
        
        int count = 0;
       
        
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                nums[count++] = nums[i];
            }
            
            else
            {
                if(nums[i] != nums[i - 1])
                {
                    cout << "here";
                    nums[count++] = nums[i];
                }
            }
        }
        
        return count;
        
    }
};
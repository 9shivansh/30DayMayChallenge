class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        
        int majEl;
        
        int size = nums.size();
        
        int count = 0;
        
        for(int i = 0; i < size; i++)
        {
            if(count == 0)
            {
                majEl = nums[i];
                count = 1;
            }
            else
            {
                if(majEl == nums[i])
                {
                    count = count + 1;
                }

                else
                {
                    count = count - 1;
                }
            }
            
            
        }
        
        return majEl;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        
        int majElement = 0;
        int count = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(count == 0)
            {
                majElement = nums[i];
            }
            
            if(nums[i] == majElement)
            {
                count = count + 1;
            }
            
            else
            {
                count = count - 1;
            }
        }
        
        return majElement;
        
        
    }
};
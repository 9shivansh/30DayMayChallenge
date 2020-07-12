class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int answer;
        
        int size = nums.size();
        
        if(size == 0)
        {
            return 0;
        }
        
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                answer = nums[i];
            }
            
            else
            {
                answer = answer ^ nums[i];
            }
        }
        
        return answer;
        
    }
};
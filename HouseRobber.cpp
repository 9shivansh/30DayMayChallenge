class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int size = nums.size();
        
        if(size == 0)
        {
            return 0;
        }
        
        int including = 0;
        int excluding = 0;
        
        for(int i = 0; i < size; i++)
        {
            int temp = including;
            including = max(excluding + nums[i], including);
            excluding = temp;
        }
        
        return max(including, excluding);
    }
};
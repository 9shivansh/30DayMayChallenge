class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        
        sort(nums.begin(), nums.end());
        int size = nums.size();
        if(size == 0 || size == 1)
        {
            return false;
        }
        
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i + 1])
            {
                return true;
            }
        }
        
        return false;
        
    }
};
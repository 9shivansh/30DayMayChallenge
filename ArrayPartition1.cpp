class Solution {
public:
    int arrayPairSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        
        int size = nums.size();
        
        if(size == 0)
        {
            return 0;
        }
        
        
        int sum = 0;
        
        for(int i = 0; i < size; i = i + 2)
        {
            sum = sum + min(nums[i], nums[i + 1]);
        }
        
        return sum;
        
    }
};
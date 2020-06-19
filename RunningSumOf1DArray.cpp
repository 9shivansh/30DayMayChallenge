class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> sums(nums.size(), 0);
        
        int size = nums.size();
        
        
        sums[0] = nums[0];
        
        
        for(int i = 1; i < size; i++)
        {
            sums[i] = sums[i - 1] + nums[i];
        }
        
        return sums;
        
        
    }
};
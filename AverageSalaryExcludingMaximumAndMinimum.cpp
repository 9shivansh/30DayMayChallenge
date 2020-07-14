class Solution {
public:
    double average(vector<int>& nums) 
    {
        double size = nums.size();
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        double sum = 0.0;
        
        if(size < 3)
        {
            return 0;
        }
        
        for(int i = 0; i < size; i++)
        {
            sum = sum + nums[i];
            maximum = max(nums[i], maximum);
            minimum = min(nums[i], minimum);
        }
        
        sum = sum - maximum - minimum;
        
        size = size - 2;
        
        return sum/size;
        
    }
};
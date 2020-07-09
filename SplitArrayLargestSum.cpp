class Solution {
public:
    int splitArray(vector<int>& nums, int m) 
    {
        int size = nums.size();
        
        int maximum = INT_MIN;
        long long sum = 0;
        
        for(int i = 0; i < size; i++)
        {
            maximum = max(maximum, nums[i]);
            sum = sum + nums[i];
        }
        
        
        long long start = maximum;
        long long end = sum;
        
        while(start < end)
        {
            long long mid = (start + end) / 2;
            
            //cout << mid << endl;
            
            cout << helper(nums, mid) << endl;
            
            if(helper(nums, mid) <= m)
            {
                end = mid;
            }
            
            else
            {
                start = mid + 1;
            }
        }
        
        return start;
        
    }
    
    
    int helper(vector<int> nums, int num)
    {
        int size = nums.size();
        
        long long count = 0;
        long long sum = 0;
        long long i = 0;
        
        while(i < size)
        {
            sum = sum + nums[i];
            
            if(sum > num)
            {
                //sum = sum - nums[i];
                i = i - 1;
                count = count + 1;
                sum = 0;
            }
            
            i++;
        }
        
        if(sum)
        {
            count = count + 1;
        }
        
        return count;
    }
};
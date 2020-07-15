class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) 
    {
        int start = 0;
        int end = 0;
        
        int size = nums.size();
        int sum = 0;
        if(size == 0)
        {
            return 0;
        }
        int minLength = INT_MAX;
        
        while(end < size)
        {
            sum = sum + nums[end];
            
            while(sum >= s)
            {
                int length = end + 1 - start;
                minLength = min(length, minLength);
                sum = sum - nums[start];
                start = start + 1;
            }
            
            cout << start << " " << end <<  " " << sum << endl;
            end++;
        }
        
        if(minLength == INT_MAX)
        {
            return 0;
        }
        
        return minLength;
        
    }
};
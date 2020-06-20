class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) 
    {
        int size = nums.size();
        
        if(size == 0)
        {
            return 0;
        }
        
        int minLength = INT_MAX;
        
        //vector<int> sums(size + 1, 0);
    
        int sum = 0;
    
        int left = 0;
        int right = 0;
        
        
        while(right < size)
        {
            sum = sum + nums[right];
            //cout << sum << endl;
            while(sum >= s)
            {
                int length = right - left + 1;
                cout << right << " " << left << endl;
                minLength = min(minLength, length);
                sum = sum - nums[left];
                left = left + 1;
            }
            
            right = right + 1;
            
        }
        
        if(minLength == INT_MAX)
        {
            return 0;
        }
        
        
        return minLength;
        
        
    }
};
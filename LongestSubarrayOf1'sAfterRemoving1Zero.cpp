class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        vector<int> temp;
        
        int maxLength = -1;
        
        int size = nums.size();
        
        int sum = 0;
        
        int end = 0;
        
        while(end < size)
        {
            if(nums[end] == 0)
            {
                if(sum)
                {
                    temp.push_back(sum);
                    sum = 0;
                }
                temp.push_back(0);
            }
            
            if(nums[end] == 1)
            {
                sum = sum + nums[end];
            }
            
            end++;
        }
        
        if(sum)
        {
            temp.push_back(sum);
        }
        
        int countZero = 0;
        
        
        for(int i = 0; i < temp.size(); i++)
        {
            if(temp[i] == 0)
            {
                countZero++;
            }
            
            if(i < temp.size() - 2 && temp.size() > 2)
            {
                maxLength = max(maxLength, temp[i] + temp[i + 2]);
            }
            
            maxLength = max(temp[i], maxLength);
        }
        
        if(countZero == 0)
        {
            return maxLength - 1;
        }
        return maxLength;
    }
};
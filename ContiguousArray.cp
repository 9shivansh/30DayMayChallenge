class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        unordered_map<int, int> mp;
        
        int sum = 0;
        
        int size = nums.size();
        
        mp.insert(make_pair(0, -1));
        
        int maxDiff = INT_MIN;
        
        for(int i = 0; i < size; i++)
        {
            if(nums[i] == 0)
            {
                sum = sum + 1;
            }
            
            if(nums[i] == 1)
            {
                sum = sum - 1;
            }
            
            if(mp.find(sum) != mp.end())
            {
                maxDiff = max(maxDiff, i - mp[sum]);
            }
            
            else
            {
                mp.insert(make_pair(sum, i));
            }
        }
        
        if(maxDiff == INT_MIN)
        {
            return 0;
        }
        
        return maxDiff;
        
    }
};
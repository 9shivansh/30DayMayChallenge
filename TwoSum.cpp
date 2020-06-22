class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> mp;
        
        int size = nums.size();
        
        vector<int> result;
        
        for(int i = 0; i < size; i++)
        {
            if(mp.find(target - nums[i]) != mp.end())
            {
                result.push_back(mp[target - nums[i]]);
                result.push_back(i);
            }
            
            else
            {
                mp[nums[i]] = i;
            }
        }
        
        return result;
    }
};
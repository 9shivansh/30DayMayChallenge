class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> map;
        
        int size = nums.size();
        
        vector<int> sum;
        
        for(int i = 0; i < size; i++)
        {
            if(map.find(target - nums[i]) != map.end())
            {
                sum.push_back(map[target - nums[i]]);
                sum.push_back(i);
                return sum;
            }
            
            else
            {
                map[nums[i]] = i;
            }
        }
        
        return sum;
        
    }
};
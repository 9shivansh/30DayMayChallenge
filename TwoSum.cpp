class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> map;
        vector<int> result;
        int size = nums.size();
        
        for(int i = 0; i < size; i++)
        {
            map[nums[i]] = i;
        }
        
        for(int i = 0; i < size; i++)
        {
            //cout << target - nums[i] << endl;
            if(map.find(target - nums[i]) != map.end() && map[target - nums[i]] != i)
            {
                result.push_back(i);
                result.push_back(map[target - nums[i]]);
                
                return result;
            }
        }
        
        return result;
        
    }
};
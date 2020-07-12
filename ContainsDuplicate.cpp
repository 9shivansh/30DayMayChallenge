class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_map<int, int> map;
        
        int size = nums.size();
        
        for(int i = 0; i < size; i++)
        {
            if(map.find(nums[i]) != map.end())
            {
                return true;
            }
            
            map[nums[i]]++;
        }
        
        return false;
    }
};
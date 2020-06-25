class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int, int> m;
        
        int size = nums.size();
        
        for(int i = 0; i < size; i++)
        {
            if(m.find(nums[i]) != m.end())
            {
                m[nums[i]] = m[nums[i]] + 1;
            }
            
            else
            {
                m[nums[i]] = 1;
            }
        }
        
        
        for(auto x : m)
        {
            if(x.second == 1)
            {
                return x.first;
            }
        }
        
        return -1;
    }
};
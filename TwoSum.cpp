class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> s1;
        int size = nums.size();
        vector<int> result;
        
        for(int i = 0; i < size; i++)
        {
            if(s1.find(target - nums[i]) != s1.end())
            {
                result.push_back(s1[target - nums[i]]);
                result.push_back(i);
                return result;
            }
            
            else
            {
                s1.insert(pair<int, int>(nums[i], i));
            }
        }
        
        return result;
        
    }
};s
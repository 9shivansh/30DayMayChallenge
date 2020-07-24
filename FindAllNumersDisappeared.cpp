class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        unordered_map<int, int> map;
        vector<int> temp;
        
        int size = nums.size();
        
        for(int i = 0; i < size; i++)
        {
            map[nums[i]]++;
        }
        
        
        for(int i = 1; i < size + 1; i++)
        {
            if(map.find(i) == map.end())
            {
                temp.push_back(i);
            }
        }
        
        return temp;
    }
};
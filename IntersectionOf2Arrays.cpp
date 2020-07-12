class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> map;
        vector<int> result;
        
        for(auto i : nums1)
        {
            map[i]++;
        }
        
        for(auto i : nums2)
        {
            if(map.find(i) != map.end())
            {
                result.push_back(i);
                map.erase(i);
            }
        }
        
        return result;
    }
};
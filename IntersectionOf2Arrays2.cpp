class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        int size = nums1.size();
        
        unordered_map<int, int> map;
        
        for(int i = 0; i < size; i++)
        {
            map[nums1[i]] = map[nums1[i]] + 1;
        }
        
        
        size = nums2.size();
        
        vector<int> result;
        
        for(int i = 0; i < size; i++)
        {
            if(map.find(nums2[i]) != map.end())
            {
                if(map[nums2[i]] == 1)
                {
                    result.push_back(nums2[i]);
                    map.erase(nums2[i]);
                }
                
                if(map[nums2[i]] > 1)
                {
                    result.push_back(nums2[i]);
                    map[nums2[i]] = map[nums2[i]] - 1;
                }
            }
        }
        
        return result;
    }
};
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> mp;
        
        int size = nums1.size();
        
        for(int i = 0; i < size; i++)
        {
            if(mp.find(nums1[i]) != mp.end())
            {
                mp[nums1[i]] = mp[nums1[i]] + 1;
            }
            
            else
            {
                mp[nums1[i]] = 1;
            }
        }
        
        size = nums2.size();
        
        vector<int> result;
        
        
        for(int i = 0; i < size; i++)
        {
            if(mp.find(nums2[i]) != mp.end())
            {
                if(mp[nums2[i]] == 1)
                {
                    mp.erase(nums2[i]);
                }
                
                else
                {
                    mp[nums2[i]] = mp[nums2[i]] - 1;
                }
                
                result.push_back(nums2[i]);
            }
            
        }
        
        return result;
    }
};
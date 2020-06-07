class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int> s1;
        vector<int> result;
        
        int size1 = nums1.size();
        int size2 = nums2.size();
        
        for(int i = 0; i < size1; i++)
        {
            
                s1.insert(nums1[i]);
            
        }
        
        for(int i = 0; i < size2; i++)
        {
            if(s1.find(nums2[i]) != s1.end())
            {
                result.push_back(nums2[i]);
                s1.erase(nums2[i]);
                
            }
        }
        
        return result;
        
        
        
        
        
        
    }
};
class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int count = 0;
        
        int maxLength = 0;
        
        unordered_map<int, int> map;
        
        map[0] = 0;
        
        int size = nums.size();
        
        for(int i = 0; i < size; i++)
        {
            if(nums[i] == 0)
            {
                count = count + 1;
            }
            
            if(nums[i] == 1)
            {
                count = count - 1;
            }
            
            if(map.find(count) != map.end())
            {
                int length = i + 1 - map[count];
                maxLength = max(maxLength, length);
            }
            
            else
            {
                map[count] = i + 1;
            }
        }
        
        return maxLength;
        
    }
};
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        vector<int> temp;
        
        int q = nums[0];
        int size = nums.size();
        temp.push_back(q);
        
        for(int i = 1; i < size; i++)
        {
            temp.push_back(max(temp[temp.size() - 1] + nums[i], nums[i]));
        }
        
        int result = INT_MIN;
        
        for(int i = 0; i < size; i++)
        {
            result = max(temp[i], result);
        }
        
        return result;
    }
};
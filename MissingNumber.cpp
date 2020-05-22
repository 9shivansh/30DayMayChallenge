class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        
        int totalSum = ((n) * (n + 1)) / 2;
        
        int givenSum = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            givenSum = givenSum + nums[i];
        }
        
        return totalSum - givenSum;
        
    }
};
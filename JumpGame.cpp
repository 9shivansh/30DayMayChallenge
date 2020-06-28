class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        
        int size = nums.size();
        
        int maximum = nums[0];
        
        
        for(int i = 0; i <= maximum; i++)
        {
            maximum = max(maximum, nums[i] + i);
            
            cout << maximum << endl;
            
            if(maximum >= size - 1)
            {
                return true;
            }
        }
        
        return false;
    }
};
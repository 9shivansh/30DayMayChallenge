class Solution {
public:
    bool isHappy(int n) 
    {
        unordered_map<int, int> mp;
        
        mp[n] = 1;
        
        int sum = n;
        while(sum != 1)
        {
            int q = helper(sum);
            
            if(mp.find(q) == mp.end())
            {
                mp[q] = 1;
                sum = q;
            }
            
            else
            {
                return false;
            }
        }
        
        return true;
    }
    
    
    int helper(int s)
    {
        int sum = 0;
        while(s)
        {
            int q = s % 10;
            sum = sum + (q * q);
            s = s / 10;
        }
        
        return sum;
    }
};
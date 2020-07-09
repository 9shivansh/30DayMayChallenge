class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if(num == 0 || num == 1)
        {
            return true;
        }
        
        long long start = 2;
        
        long long end = num;
        
        
        while(start < end)
        {
            long long mid = (start + end) / 2;
            
            if(mid * mid == num)
            {
                return true;
            }
            
            
            if(mid * mid < num)
            {
                start = mid + 1;
            }
            
            if(mid * mid > num)
            {
            
                end = mid;
            }
        }
        
        return false;
    }
};
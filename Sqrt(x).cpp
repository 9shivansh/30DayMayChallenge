class Solution {
public:
    int mySqrt(int x) 
    {
        if(x == 0 || x == 1)
        {
            return x;
        }
        
        long long start = 2;
        long long end = x;
        
        
        while(start <= end)
        {
            long long mid = (start + end) / 2;
            
            if(mid * mid == x)
            {
                return mid;
            }
            
            if(mid * mid < x)
            {
                start = mid + 1;
            }
            
            if(mid * mid > x)
            {
                end = mid - 1;
            }
            
        }
        
        return start - 1;
        
    }
};
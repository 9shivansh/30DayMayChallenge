class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if(dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }
        
        long int result = dividend / divisor;
        
        if(result > 2147483647)
        {
            return 2147483647;
        }
        
        if(result < -2147483648)
        {
            return 2147483647;
        }
        
        return result;
        
    }
};
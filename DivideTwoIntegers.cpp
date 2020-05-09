class Solution {
public:
    long int divide(long int dividend, long int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
     
        else
        {
        return round(dividend/divisor);
        }
    }
};
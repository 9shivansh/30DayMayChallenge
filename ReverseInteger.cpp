class Solution {
public:
    int reverse(int x) 
    {
        long long int reversed = 0;
        while(x)
        {
            long long int p = x % 10;
            reversed = (reversed * 10) + p;
            x = x / 10;
        }
        
        if(reversed < 2147483648 && reversed >= -2147483648)
        {
            return reversed;
        }
        
        return 0;
    }
};
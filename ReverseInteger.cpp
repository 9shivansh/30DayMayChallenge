class Solution {
public:
    int reverse(int x) 
    {
        
        
        long long int sum = 0;
        
        while(x)
        {
            int p = x % 10;
            sum = (sum*10) + p;
            if(sum > 2147483647 || sum < -2147483648)
            {
                return 0;
            }
            x = x / 10;
        }
        
        
        return sum;
        
        
        
        
        
    }
};
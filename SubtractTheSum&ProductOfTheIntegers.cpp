class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        if(n == 0)
        {
            return 0;
        }
        int sum = 0;
        int product = 1;
        while(n)
        {
            int p = n % 10;
            sum = sum + p;
            product = product * p;
            n = n / 10;
        }
        
        return product - sum;
    }
};
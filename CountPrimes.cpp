class Solution {
public:
    int countPrimes(int n) 
    {
        
        if(n < 2)
        {
            return 0;
        }
        
        vector<bool> primes(n, true);
        
        
        primes[0] = primes[1] = false;
        
        
        for(int i = 2; i < sqrt(n); i++)
        {
            if(primes[i] == true)
            {
                for(int j = i * i; j < n; j = j + i)
                {
                    primes[j] = false;
                }
            }
        }
        
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(primes[i] == true)
            {
                count = count + 1;
            }
        }
        
        return count;
    }
};
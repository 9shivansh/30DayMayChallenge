class Solution {
public:
    int bitwiseComplement(int n) 
    {
        if(n == 0)
        {
            return 1;
        }
        int sum = 0;
        int count = 0;
        while(n)
        {
            if(n % 2 == 0)
            {
                sum = sum + pow(2,count);
            }
            count = count + 1;
            n = n / 2;
        }
    
        //cout << sum << endl;
        return sum;
        
    }
};
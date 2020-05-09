class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if(num == 1)
        {
            return 1;
        }
        
        
        for(long long int i = 1; ; i++)
        {
            if(i * i > num)
            {
                return false;
            }
            
            if(i * i == num)
            {
                return true;
            }
        }
        
        return false;
    }
};
class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if(num == 0 || num == 1)
        {
            return true;
        }
        
        for(long long int i = 2; i * i <= num; i++)
        {
            if(i * i == num)
            {
                return true;
            }
        }
        
        
        return false;
    }
};
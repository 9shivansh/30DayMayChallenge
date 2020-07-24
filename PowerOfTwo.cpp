class Solution {
public:
    bool isPowerOfTwo(int num) 
    {
        int count = 0;
        
        while(num)
        {
            int p = num % 2;
            num = num / 2;
            
            if(p == 1)
            {
                count++;
            }
        }
        
        if(count == 1)
        {
            return true;
        }
        
        return false;
    }
};
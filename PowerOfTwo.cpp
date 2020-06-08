class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        int answer = binaryRepresentation(n);
        if(answer == 1)
        {
            return true;
        }
        
        return false;
        
    }
    
    
    int binaryRepresentation(int n)
    {
        int count = 0;
        while(n)
        {
            int p = n % 2;
            n = n / 2;
            if(p == 1)
            {
                count = count + 1;
            }
        }
        
        if(count == 1)
        {
            return 1;
        }
        
        return 0;
    }
};
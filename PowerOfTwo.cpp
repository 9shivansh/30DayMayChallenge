class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n < 1)
        {
            return false;
        }
        if(n == 1)
        {
            return true;
        }
        
        int a = log2(n);
        auto b = log2(n);
        if(a == b)
        {
            return true;
        }
        return false;
        
    }
};
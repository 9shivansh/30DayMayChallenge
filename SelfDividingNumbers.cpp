class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> answer;
        
        for(int i = left; i < right + 1; i++)
        {
            bool result = helper(i);
            if(result)
            {
                answer.push_back(i);
            }
        }
        
        return answer;
        
    }
    
    bool helper(int n)
    {
        int p = n;
        
        while(n)
        {
            int s = n % 10;
             
            if(s == 0)
            {
                return false;
            }
            
            if(p % s != 0)
            {
                return false;
            }
            
            n = n / 10;
        }
        
        return true;
    }
};
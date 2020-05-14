class Solution {
public:
    vector<int> sumZero(int n) 
    {
        
        vector<int> result;
        if(n == 0)
        {
            return result;
        }
        if(n % 2 == 0)
        {
            int p = n/2;
            for(int i = -p; i <= p; i++)
            {
                if(i != 0)
                {
                    result.push_back(i);
                }
            }
        }
        else
        {
            int p = n/2;
            for(int i = -p; i <= p; i++)
            {
                result.push_back(i);
            }
        }
        
        return result;
        
    }
};
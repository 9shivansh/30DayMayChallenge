class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int result = x ^ y;
        vector<int> temp = binary(result);
        int count = 0;
        
        for(auto i : temp)
        {
            if(i == 1)
            {
                count++;
            }
        }
        
        return count;
        
    }
    
    
    vector<int> binary(int num)
    {
        vector<int> result;
        
        while(num)
        {
            int p = num % 2;
            result.push_back(p);
            num = num / 2;
        }
        
        if(result.size() == 0)
        {
            result.push_back(0);
            return result;
        }
        
        return result;
    }
};
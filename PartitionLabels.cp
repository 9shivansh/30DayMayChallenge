class Solution {
public:
    vector<int> partitionLabels(string S) 
    {
        int length = S.length();
        
        vector<int> result;
        
        if(length == 0)
        {
            return result;
        }
        
        unordered_map<char, int> map;
        
        for(int i = 0; i < length; i++)
        {
            map[S[i]] = i;
        }
        
       
        
        int maximum = -1;
        int start = 0;
        
        for(int i = 0; i < length; i++)
        {
            maximum = max(map[S[i]], maximum);
            
            if(maximum == i)
            {
                int length = maximum + 1 - start;
                result.push_back(length);
                start = i + 1;
                maximum = -1;
            }
        }
        
        return result;
        
    }
};
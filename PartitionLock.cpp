class Solution {
public:
    vector<int> partitionLabels(string S) 
    {
        int length = S.length();
        
        unordered_map<char, int> map;
        
        for(int i = 0; i < length; i++)
        {
            map[S[i]] = i;
        }
        
        
        vector<int> result;
        
        int maximum = -1;
        
        int start = 0;
        
        
        for(int i = 0; i < length; i++)
        {
            maximum = max(map[S[i]], maximum);
            
            if(maximum == i)
            {
                result.push_back(i + 1 - start);
                start = i + 1;
            }
        }
        return result;
        
    }
};
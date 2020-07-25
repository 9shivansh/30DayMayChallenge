class Solution {
public:
    string customSortString(string S, string T) 
    {
        unordered_map<char, int> map;
        
        int length = T.length();
        
        for(int i = 0; i < length; i++)
        {
            map[T[i]]++;
        }
        
        string result;
        
        
        for(int i = 0; i < S.length(); i++)
        {
            if(map.find(S[i]) != map.end())
            {
                for(int j = 0; j < map[S[i]]; j++)
                {
                    result = result + S[i];
                    
                }   
                
                map.erase(S[i]);
            }
        }
        
        for(auto it : map)
        {
            for(int i = 0; i < it.second; i++)
            {
                result = result + it.first;
            }
        }
        
        return result;
    }
};
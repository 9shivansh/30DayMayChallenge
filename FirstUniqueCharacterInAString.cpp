class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> map;
        
        int length = s.length();
        
        for(int i = 0; i < length; i++)
        {
            map[s[i]]++;
        }
        
        for(int i = 0; i < length; i++)
        {
            if(map[s[i]] == 1)
            {
                return i;
            }
        }
        
        return -1;
        
    }
};
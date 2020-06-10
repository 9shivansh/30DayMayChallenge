class Solution {
public:
    int firstUniqChar(string s) 
    {
        map<char, int> mp;
        
        int size = s.size();
        
        int index;
        
        for(int i = 0; i < size; i++)
        {
            if(mp.find(s[i]) != mp.end())
            {
                mp[s[i]] = mp[s[i]] + 1;
            }
            
            else
            {
                mp.insert(pair<char, int>(s[i], 1));
            }
        }
        
        
        
        for(int i = 0; i < size; i++)
        {
            if(mp[s[i]] == 1)
            {
                return i;
            }
        }
        
        
        return -1;
    }
};
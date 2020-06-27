class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int start = 0;
        int end = 0;
        
        
        int length = s.length();
        
        unordered_map<char, int> mp;
        
        int maxLength = 0;
        
        while(end < length)
        {
            if(mp.find(s[end]) != mp.end())
            {
                mp.erase(s[start]);
                start = start + 1;
                int length = mp.size();
                maxLength = max(length, maxLength);
            }
            
            else
            {
                mp[s[end]] = end;
                end = end + 1;
                int length = mp.size();
                maxLength = max(length, maxLength);
            }
            
        }
        
        return maxLength;
        
    }
};
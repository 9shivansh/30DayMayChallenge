class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        
        int start = 0;
        
        int length = s.length();
        
        while(start < length)
        {
            if(s[start] != t[start])
            {
                return t[start];
            }
            
            start++;
        }
        
        return t[length];
        
    }
};
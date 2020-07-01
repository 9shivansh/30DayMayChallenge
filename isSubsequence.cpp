class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int length1 = s.length();
        int length2 = t.length();
        
        
        int start1 = 0;
        int start2 = 0;
        
        while(start2 < length2)
        {
            if(s[start1] == t[start2])
            {
                start1 = start1 + 1;
                start2 = start2 + 1;
            }
            
            else
            {
                start2 = start2 + 1;
            }
        }
        
        
        if(start1 == length1)
        {
            return true;
        }
        
        return false;
        
    }
};
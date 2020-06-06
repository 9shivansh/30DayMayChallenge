class Solution {
public:
    bool checkRecord(string s) 
    {
        int countA = 0;
        
        
        int length = s.length();
        
        
        if(length == 0)
        {
            return false;
        }
        
        
        for(int i = 0; i < length; i++)
        {
            if(s[i] == 'A')
            {
                countA = countA + 1;
                
                if(countA > 1)
                {
                    return false;
                }
            }
            
            if(s[i] == 'L')
            {
                if(i > 1)
                {
                    if(s[i - 1] == 'L' && s[i - 2] == 'L')
                    {
                        return false;
                    }
                }
            }
        }
        
        return true;
        
        
        
    }
};
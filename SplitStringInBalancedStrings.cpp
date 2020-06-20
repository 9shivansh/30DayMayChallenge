class Solution {
public:
    int balancedStringSplit(string s) 
    {
        int count = 0;
        
        int length = s.length();
        
        if(length < 2)
        {
            return 0;
        }
        
        int answer = 0;
        
        for(int i = 0; i < length; i++)
        {
            if(s[i] == 'L')
            {
                count = count + 1;
            }
            
            if(s[i] == 'R')
            {
                count = count - 1;
            }
            
            if(count == 0)
            {
                answer = answer + 1;
            }
        }
        
        return answer;
        
    }
};
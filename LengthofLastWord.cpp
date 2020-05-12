class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        if(s.length() == 0)
        {
            return 0;
        }
        int countSpace = 0;
        int counter = 0;
        for(int i = s.length() - 1; i > -1; i--)
        {
            if(s[i] == ' ')
            {
                if(counter == 0)
                {
                    countSpace = countSpace + 1;
                }
                else
                {
                    break;
                }
            }
            else
            {
                counter = counter + 1;
            }
            
        }
        
        return counter;
    }
};
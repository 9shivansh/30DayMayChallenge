class Solution {
public:
    bool isValid(string s) 
    {
        /* some sanity check */
        int len = s.length();
       
        if( len  == 1 || (len % 2 != 0)  /* should have valid pairs */)
            return false;
        
        
        char cParenthesis =' ';
        bool bValid = true;
        stack <char> charStck;
        
        for(int i = 0; i < len && bValid; i++)
        {
            cParenthesis= s[i];
            if( charStck.empty() ) 
            {
                charStck.push(cParenthesis);
            }
            else
            {
                switch(cParenthesis)
                {
                case ']':
                    if( '[' == charStck.top() )
                    {
                        charStck.pop();
                    }
                    else
                    {
                        charStck.push(cParenthesis);
                    }  
                    break;
                case '}':
                    if( '{' == charStck.top() )
                    {
                        charStck.pop();
                    }
                    else
                    {
                        charStck.push(cParenthesis);
                    }  
                    break;
                case ')':  
                    if( '(' == charStck.top() )
                    {
                        charStck.pop();
                    }
                    else
                    {
                        charStck.push(cParenthesis);
                    }  
                    break;
                default:
                    charStck.push(cParenthesis);  
                }
            }
        }

        bValid = ( charStck.empty() == 1 ? true : false );
       
        return bValid;
    }
};
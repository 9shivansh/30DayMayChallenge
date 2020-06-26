class Solution {
public:
    bool isValid(string s) 
    {
        int length = s.length();
        
        
        if(length == 0)
        {
            return true;
        }
        
        stack<char> st;
        
        
        for(int i = 0; i < length; i++)
        {
            if(s[i] == '}')
            {
                if(st.empty() || st.top() != '{')
                {
                    return false;
                }
                
                else
                {
                    st.pop();
                }
            }
            
            else if(s[i] == ')')
            {
                if(st.empty() || st.top() != '(')
                {
                    return false;
                }
                
                else
                {
                    st.pop();
                }
            }
            
            else if(s[i] == ']')
            {
                if(st.empty() || st.top() != '[')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
            
            else
            {
                st.push(s[i]);
            }
        }
        
        if(st.empty())
        {
            return true;
        }
        
        return false;
    }
};
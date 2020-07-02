class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        
        int length = s.length();
        
        int count = 0;
        
        stack<char> st;
        
        
        for(int i = 0; i < length; i++)
        {
            //cout << s[i] >> " ";
            if(s[i] == '(')
            {
                st.push(s[i]);
                count = count + 1;
            }
            
            if(s[i] == ')')
            {
                if(!st.empty())
                {
                    if(st.top() == '(')
                    {
                        st.pop();
                        count = count - 1;
                    }
                
                    else
                    {
                        st.push(s[i]);
                        count = count + 1;
                    }
                }
                else
                {
                    st.push(s[i]);
                    count = count + 1;
                }
            }
            
        }

        return count;
    }
};
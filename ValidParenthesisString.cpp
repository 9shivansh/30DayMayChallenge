class Solution {
public:
    bool checkValidString(string s) 
    {
        int length = s.length();
        
        stack<int> stk1;
        stack<int> stk2;
        
        
        for(int i = 0; i < length; i++)
        {
            if(s[i] == '(')
            {
                stk1.push(i);
            }
            
            if(s[i] == '*')
            {
                stk2.push(i);
            }
            
            if(s[i] == ')')
            {
                if(!stk1.empty())
                {
                    stk1.pop();
                }
                
                else if(stk1.empty())
                {
                    if(!stk2.empty())
                    {
                        stk2.pop();
                    }
                    
                    else if(stk2.empty())
                    {
                        return false;
                    }
                }
            }
            
            
        }
        
        cout << "end of for" << endl;
        
        while(!stk1.empty() && !stk2.empty())
        {
            if(stk1.top() > stk2.top())
            {
                return false;
            }
            
            stk1.pop();
            stk2.pop();
        }
        
        if(stk1.empty())return true;
        
        return false;
    }
};
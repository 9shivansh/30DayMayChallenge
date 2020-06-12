class Solution {
public:
    string reverseWords(string s) 
    {
        stack<string> s1;
        
        int length = s.length();
        
        string temp;
        
        for(int i = 0; i < length; i++)
        {
            if(s[i] == ' ')
            {
                s1.push(temp);
                temp = "";
                s1.push(" ");
            }
            
            else
            {
                temp = temp + s[i];
            }
            
        }
        
        s1.push(temp);
        
        
        string result;
        
        while(!s1.empty())
        {
            string a = s1.top();
            s1.pop();
            
            
            
            string b = reversed(a);
            
            result = b + result;
        }
        
        return result;
        
        
    }
    
    
    string reversed(string s)
    {
        int length = s.length();
        
        for(int i = 0; i < length / 2; i++)
        {
            swap(s[i], s[length - 1 - i]);
        }
        
        return s;
    }
};
class Solution {
public:
    string removeOuterParentheses(string S) 
    {
        int length = S.length();
        
        vector<string> temp;
        
        int count = 0;
        
        string s;
        
        for(int i = 0; i < length; i++)
        {
            if(S[i] == '(')
            {
                count = count + 1;
            }
            
            if(S[i] == ')')
            {
                count = count - 1;
            }
            
            s = s + S[i];
            
            if(count == 0)
            {
                temp.push_back(s);
                s = "";
            }
        }
        
        string result;
        
        for(int i = 0; i < temp.size(); i++)
        {
            string t = temp[i];
            
            for(int j = 1; j < t.length() - 1; j++)
            {
                result = result + t[j];
            }
            
        }
        
        return result;
        
        
        
    }
};
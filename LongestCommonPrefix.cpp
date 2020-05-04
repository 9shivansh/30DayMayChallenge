class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int min = 1001;
        
        if(strs.size() == 0)
        {
            return "";
        }
        
        if(strs.size() == 1)
        {
            return strs[0];
        }

        
        for(int i = 0; i < strs.size(); i++)
        {
            string p = strs[i];
            int len = p.length();
            if(len < min)
            {
                min = len;
            }
        }
        string s;
        int flag = 0;
        for(int i = 0; i < min; i++)
        {
            for(int j = 0; j < strs.size() - 1; j++)
            {
                if(strs[j][i] != strs[j + 1][i])
                {
                    flag = -1;
                    break;
                }
            }
            
            if(flag == -1)
            {
                break;
            }
            else
            {
                s = s + strs[0][i];
            }
        }
        
        cout << s << endl;
        return s;
        
    }
};
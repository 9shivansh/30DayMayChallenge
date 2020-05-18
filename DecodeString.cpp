class Solution {
public:
    string decodeString(string s) {
        stack<char>s1;
        stack<char>s2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {s2.push(s[i]);s1.push('!');}
            else if(s[i]==']')
            {
                string num;
                if(s1.top()=='!')
                s1.pop();
                while(!s1.empty()&&s1.top()!='!')
                {
                    num.push_back(s1.top());
                    s1.pop();
                }
                reverse(num.begin(),num.end());
                
                int x=0;
                for(int j=0;j<num.size();j++)
                    x=x*10+(num[j]-'0');
                string temp;
                while(!s2.empty()&&s2.top()!='[')
                {
                    temp.push_back(s2.top());
                    s2.pop();
                }
                reverse(temp.begin(),temp.end());
                s2.pop();
                string t=temp;
                for(int j=0;j<x-1;j++)
                    temp+=t;
                for(int j=0;j<temp.size();j++)
                {
                    s2.push(temp[j]);
                }
                
            }
            else if(s[i]<='9'&&s[i]>='0')
                s1.push(s[i]);
            else
                s2.push(s[i]);
        }
        string ans;
        while(!s2.empty())
        {
            ans.push_back(s2.top());
                    s2.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
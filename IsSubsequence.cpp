class Solution {
public:
    bool isSubsequence(string s, string t) {
    int count=0;
    for(int i=0,j=0;i<t.size();i++)
    {
    if(s[j]==t[i])
    {
    count++;
    j++;
    }
    } 
return s.size()==count;   
    }
};
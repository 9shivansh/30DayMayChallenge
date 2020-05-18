class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        
        int length = s.size();
        
        reversal(s, 0, length - 1);
        
    }
    
    
    void reversal(vector<char>& s, int start, int end)
    {
        if(start > end)
        {
            return;
        }
        else
        {
            char t = s[start];
            s[start] = s[end];
            s[end] = t;
            reversal(s, start + 1, end - 1);
        }
    }
};
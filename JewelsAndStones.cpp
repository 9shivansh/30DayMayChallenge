class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        set<char> s1;
        int count = 0;
        for(int i = 0; i < J.length(); i++)
        {
            s1.insert(J[i]);
        }
        
        for(int i = 0; i < S.length(); i++)
        {
            if(s1.find(S[i]) != s1.end())
            {
                count = count + 1;
            }
        }
        
        return count;
    }
};
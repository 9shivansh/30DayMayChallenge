class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        vector<int> pcount(26, 0);
        
        for(char c : s1) pcount[c - 'a']++;
        
        int pN = s1.size();
        
        vector<int> scount(26, 0);
        
        for(int i = 0; i < s2.size(); i++)
        {
            scount[s2[i] - 'a']++;
            
            if(i >= pN) 
                
                scount[s2[i-pN] - 'a']--;     
            
            if(scount == pcount) 
                
                return true;
        }
        
        return false;
    }
};
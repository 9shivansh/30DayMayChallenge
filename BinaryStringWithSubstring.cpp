class Solution {
public:
    bool queryString(string S, int N) 
    {
        
        
        for(int i = 1; i <= N; i++)
        {
            string t = helper(i);
            size_t found = S.find(t); 
            if (found == string::npos) 
            {
                return false;
            }
           
        }
         return true;
        
    }
    
    
    string helper(int num)
    {
        string temp;
        
        while(num)
        {
            int p = num % 2;
            num = num / 2;
            
            temp = to_string(p) + temp;
        }
        
        if(temp.length() == 0)
        {
            return "0";
        }
        
        return temp;
    }
};
class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0)
        {
            return false;
        }
        
        vector<int> temp;
        
        while(x)
        {
            temp.push_back(x % 10);
            x = x / 10;
        }
        
        for(int i = 0; i < temp.size() / 2; i++)
        {
            if(temp[i] != temp[temp.size() - 1 - i])
            {
                return false;
            }
        }
        
        return true;
        
        
    }
};
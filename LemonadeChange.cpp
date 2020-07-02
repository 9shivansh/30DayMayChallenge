class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int a = 0;
        int b = 0;
        int c = 0;
        
        
        int size = bills.size();
        
        for(int i = 0; i < size; i++)
        {
            if(bills[i] == 5)
            {
                a = a + 1;
            }
            
            if(bills[i] == 10)
            {
                if(a > 0)
                {
                    a = a - 1;
                    b = b + 1;
                }
                
                else
                {
                    return false;
                }
            }
            
            if(bills[i] == 20)
            {
                if(a > 0 && b > 0)
                {
                    a = a - 1;
                    b = b - 1;
                    c = c + 1;
                }
                
                else if(a > 2)
                {
                    a = a - 3;
                    c = c + 1;
                }
                
                else
                {
                    return false;
                }
            }
        }
        
        
        return true;
        
    }
};
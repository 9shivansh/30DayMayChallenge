class Solution {
public:
    string addBinary(string a, string b) 
    {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        int sum = 0;
        string s;
        int l = 0;
        int m = 0;
        
        while(i > -1 || j > -1)
        {
            
            if(i < 0)
            {
                l = 0;
            }
            else
            {
                l = a[i] - '0';
            }
            
            if(j < 0)
            {
                m = 0;
            }
            else
            {
                m = b[j] - '0';
            }
            
            sum = carry + l + m;
            if(sum == 2)
            {
                s = '0' + s;
                carry = 1;
            }
            
            if(sum == 1)
            {
                s = '1' + s;
                carry = 0;
            }
            
            if(sum == 0)
            {
                s = '0' + s;
                carry = 0;
            }
            
            if(sum == 3)
            {
                s = '1' + s;
                carry = 1;
            }
            
            
            i--;
            j--;
            
                
        }
        
        if(carry == 1)
        {
            s = '1' + s;
        }
        
        return s;
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int i = digits.size() - 1;
        
        int carry = 1;
        
        while(i > -1)
        {
            
            //cout << carry << endl;
            digits[i] = digits[i] + carry;
            if(digits[i] > 9)
            {
                
                carry = digits[i] / 10;
                digits[i] = digits[i] % 10;
                
            }
            else
            {
                carry = 0;
            }
            
            i--;
        }
        
       // cout << carry;
        
        if(carry == 1)
        {
            reverse(digits.begin(), digits.end());
            digits.push_back(1);
            reverse(digits.begin(), digits.end());
            
            
        }
        
        return digits;
    }
};
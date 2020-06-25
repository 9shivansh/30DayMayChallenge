class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int carry = 1;
        
        //vector<int> temp;
        
        
        int size = digits.size();
        
        
        for(int i = size - 1; i > -1; i--)
        {
            int num = digits[i] + carry;
            if(num > 9)
            {
                digits[i] = num % 10;
                carry = num/10;
            }
            
            else
            {
                digits[i] = num;
                carry = 0;
            }
            
        }
        
        if(carry == 1)
        {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
        
        
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int carry = 1;
        
        
        int size = digits.size();
        
        
        int end = size - 1;
        
        while(end > -1)
        {
            int sum = digits[end] + carry;
            
            carry = sum / 10;
            digits[end] = sum % 10;
            
            end--;
        }
        
        if(carry == 1)
        {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
        
    }
};
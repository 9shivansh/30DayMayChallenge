class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int size = digits.size();
        
        int end = size - 1;
        
        int carry = 1;
        
        while(end > -1)
        {
            int sum = digits[end] + carry;
            digits[end] = sum % 10;
            carry = sum / 10;
            
            end--;
        }
        
        if(carry)
        {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};
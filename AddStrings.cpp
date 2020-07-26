class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        string result;
        
        int carry = 0;
        
        int length1 = num1.length();
        int length2 = num2.length();
        
        
        int start1 = length1 - 1;
        int start2 = length2 - 1;
        
        
        while(start1 > -1 && start2 > -1)
        {
            int sum = (num1[start1] - '0') + (num2[start2] - '0') + (carry);
            carry = sum / 10;
            int digit = sum % 10;
            
            result = to_string(digit) + result;
            start1--;
            start2--;
            
        }
        
        while(start1 > -1)
        {
            int sum = (num1[start1] - '0') + (carry);
            carry = sum / 10;
            int digit = sum % 10;
            
            result = to_string(digit) + result;
            start1--;
        }
        
        while(start2 > -1)
        {
            int sum = (num2[start2] - '0') + (carry);
            carry = sum / 10;
            int digit = sum % 10;
            
            result = to_string(digit) + result;
            start2--;
        }
        
        if(carry)
        {
            result = to_string(carry) + result;
        }
        
        return result;
        
    }
};
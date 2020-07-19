class Solution {
public:
    string addBinary(string a, string b) 
    {
        int length1 = a.length();
        int length2 = b.length();
        
        
        string result;
        
        int start1 = length1 - 1;
        int start2 = length2 - 1;
        
        int carry = 0;
        
        while(start1 > -1 && start2 > -1)
        {
            int sum = (a[start1] - '0') + (b[start2] - '0') + carry;
            int digit = sum % 2;
            carry = sum / 2;
            
            result = to_string(digit) + result;
            start1--;
            start2--;
            
        }
        
        
        while(start1 > -1)
        {
            int sum = (a[start1]  - '0') + carry;
            int digit = sum % 2;
            carry = sum / 2;
            
            result = to_string(digit) + result;
            start1--;
        }
        
        while(start2 > -1)
        {
            int sum = (b[start2] - '0') + carry;
            int digit = sum % 2;
            carry = sum / 2;
            
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
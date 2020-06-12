class Solution {
public:
    string addBinary(string a, string b) {       
       int aLen = a.length() - 1;
       int bLen = b.length() - 1;
       int carry = 0;
       string resStack = "";
       while(aLen >= 0 || bLen >= 0){
            int sum = carry;
            if(aLen >= 0) sum += (a[aLen--] - '0');
            if(bLen >= 0) sum += (b[bLen--] - '0');
            resStack.push_back((sum%2+'0'));
            carry = sum / 2;
        }
        if(carry == 1)  resStack.push_back((carry+'0'));
        reverse(resStack.begin(),resStack.end());
        return resStack; 
    }
};
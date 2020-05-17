class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto x:s) if(isalpha(x) or isdigit(x)) str+=tolower(x);
        int i=0,j=str.length()-1;
        while(i<j)
        {
            if(str[i]!=str[j]) return false;
            i++;j--;
        }
        return true;
    }
};
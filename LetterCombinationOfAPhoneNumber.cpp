class Solution {
public:
    map<char,string> keys={
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};

vector<string> letterCombinations(string digits) {
    
    if(digits.size()==0) return{};
    
    vector<string> v1,v2;
    
    int len = digits.size();
    
    digits = "#" + digits;
    
    v1.push_back("");
    
    for(int i=len;i>0;i--)
    {
        v2 = v1;
        
        v1.clear();
        
        for(char c:keys[digits[i]])
        {
            for(int j=0;j<v2.size();j++)
                v1.push_back(c + v2[j]);
        }
    }
    
    return v1;
    
}
};
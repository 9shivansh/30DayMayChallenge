class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int size = s.size();
        
        if(size == 0 || size == 1)
        {
            return;
        }
        
        for(int i = 0; i < size / 2; i++)
        {
            swap(s[i], s[size - 1 - i]);
        }
        
    }
};
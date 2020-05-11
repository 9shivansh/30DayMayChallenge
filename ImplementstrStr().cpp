class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int hlen = haystack.length();
        int nlen = needle.length();
        int i = 0, j = 0;
        
        for (i = 0; i <= hlen-nlen; i++) {
            for (j = 0; j < nlen; j++) {
                if (haystack[i+j] != needle[j])
                    break;
            }
            if (j == nlen)
                return i;
        }
        return -1;
    }
};

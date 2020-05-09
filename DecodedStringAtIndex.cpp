class Solution {
public:
    string decodeAtIndex(string S, int K) {
        char last;
        while (K > 0) {
            long long len = 0;
            int n = 0;
            for (auto & c : S) {
                if ('a' <= c && c <= 'z') {
                    len ++;
                    K --;
                    last = c;
                    if (K == 0) break;
                }
                else {
                    n = (int)(c - '0');
                    if (K < len * (n-1)) {
                        while (K > len) K-=len;
                        break;
                    }
                    else {
                        K -= (n-1)*len;
                        len = n * len;
                        if (K == 0) break;
                    }
                }
            }
        }
        string ret(1,last);
        return ret;
    }
};
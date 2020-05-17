class Solution {
public:
    int trailingZeroes(int n) {
        if (n<5)
            return 0;
        return int(n/5) + trailingZeroes(int(n/5));
        
    }
};
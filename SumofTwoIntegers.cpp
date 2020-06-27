class Solution {
public:
    int getSum(int a, int b) {
        while(b)
        {
            int sum =a^b;
            b=unsigned(a&b)<<1;
            a=sum;
        }
        return a;
    }
};
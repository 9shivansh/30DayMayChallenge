class Solution {
public:
    int guessNumber(int n) {
        int l=1,r=n,m;
        while(l<=r){
            m=l+(r-l)/2;
            if(guess(m)==0)
                return m;
            if(guess(m)==-1)
                r=m-1;
            else
                l=m+1;
        }
        return 0;
    }
};
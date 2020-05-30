class Solution {
public:
    int count_bits(int n)
             {
                int  count1=0;
                while(n)
                {
                   count1+=1;
                  n= n&(n-1);
                    }
                return  count1;
                    }

    int hammingDistance(int x, int y) 
           {
          int res=x ^y; 
              return count_bits(res);
    }
};

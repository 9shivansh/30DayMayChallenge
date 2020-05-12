class Solution {
public:
    int mySqrt(int x) {
  if (x == 0 || x == 1)
    return x;
    
  long l = 0;
  long r = x;
  long m=0;
  while (l <= r) {
   m = l + (r - l) / 2;
   long sq = m * m;
    if (sq == x)
      return m;
    if (sq > x)
       r = m-1;
    else
      l = m+1;
  }
    
    if(x > m*m)
        return m;
    else 
        return m-1;
    
    return -1;

}
};
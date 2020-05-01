class Solution {
public:
    int firstBadVersion(int n) 
    {
        long int start = 1;
        long int end = n;
        long int ans = 0;
        
        while(start <= end)
        {
            int mid = (start + end)/2;
            if(isBadVersion(mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
                
            }
                
        }
        
        return ans;
        
    }
};
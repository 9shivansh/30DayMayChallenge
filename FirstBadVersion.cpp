// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        long long int start = 1;
        long long int end = n;
        
        while(start < end)
        {
            long long int mid = (start + end) / 2;
            
            if(isBadVersion(mid))
            {
                end = mid;
            }
            
            if(!isBadVersion(mid))
            {
                start = mid + 1;
            }

        }
        
        return start;
        
    }
};
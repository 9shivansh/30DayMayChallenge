class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) 
    {
        int size = A.size();
        
        int start = 0;
        int end = size - 1;
        
        
        while(start <= end)
        {
            int mid = (start + end) / 2;
            
            if(A[mid] > A[mid + 1])
            {
                end = mid - 1;
            }
            
            if(A[mid] < A[mid + 1])
            {
                start = mid + 1;
            }
        }
        
        
        return start;
        
    }
};
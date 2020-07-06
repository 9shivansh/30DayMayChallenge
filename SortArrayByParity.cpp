class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        int size = A.size();
        
        int low = 0;
        int high = size - 1;
        
        
        while(low <= high)
        {
            if(A[low] % 2 != 0)
            {
                swap(A[low], A[high]);
                high--;
            }
            
            else
            {
                low++;
            }
        }
        
        return A;
        
    }
};
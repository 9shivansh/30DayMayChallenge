class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        int pivot = -1;
        
        int size = A.size();
        
        vector<int> result;
        
        if(size == 0)
        {
            return result;
        }
        
        int minimum = INT_MAX;
        
        for(int i = 0; i < size; i++)
        {
            if(abs(A[i]) < minimum)
            {
                pivot = i;
                minimum = abs(A[i]);
            }
        }
        
        
        
        result.push_back(A[pivot] * A[pivot]);
        
        int leftPtr = pivot - 1;
        int rightPtr = pivot + 1;
        
        
        while(leftPtr > -1 && rightPtr < size)
        {
            if(abs(A[leftPtr]) > abs(A[rightPtr]))
            {
                result.push_back(A[rightPtr] * A[rightPtr]);
                rightPtr++;
            }
            
            else
            {
                result.push_back(A[leftPtr] * A[leftPtr]);
                leftPtr--;
            }
        }
        
        while(leftPtr > -1)
        {
            result.push_back(A[leftPtr] * A[leftPtr]);
            leftPtr--;
        }
        
        while(rightPtr < size)
        {
            result.push_back(A[rightPtr] * A[rightPtr]);
            rightPtr++;
        }
        
        return result;
    }
        
};
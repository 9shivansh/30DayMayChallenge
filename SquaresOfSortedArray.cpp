class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        int size = A.size();
        
        vector<int> temp;
        
        for(int i = 0; i < size; i++)
        {
            temp.push_back(A[i] * A[i]);
        }
        
        sort(temp.begin(), temp.end());
        
        return temp;
        
        
        
    }
};
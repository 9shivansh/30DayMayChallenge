class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) 
    {
        int size1 = A.size();
        int size2 = B.size();
        
        
        vector<vector<int>> result;
        
        int i = 0;
        int j = 0;
        
        while(i < size1 && j < size2)
        {
            int start = max(A[i][0], B[j][0]);
            int end = min(A[i][1], B[j][1]);
            
            if(start <= end)
            {
                vector<int> temp;
                temp.push_back(start);
                temp.push_back(end);
                
                result.emplace_back(temp);
            }
            
            if(A[i][1] > B[j][1])
            {
                j = j + 1;
            }
            else
            {
                i = i + 1;
            }
        }
        
        return result;
    }
};
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) 
    {
        int count = 0;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(matrix[i][j] == 1)
                {
                    if(i > 0 && j > 0)
                    {
                        matrix[i][j] = min(min(matrix[i - 1][j], matrix[i][j - 1]), matrix[i - 1][j - 1]) + 1;
                        count = count + (matrix[i][j] - 1);
                    }
                    
                    count = count + 1;
                    
                }
            }
            
        }
        
         return count;
    }
};
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] == 1)
                {
                    if(i > 0 && j > 0)
                    {
                        matrix[i][j] = min(min(matrix[i - 1][j], matrix[i][j - 1]), matrix[i - 1][j - 1]) + 1;
                        count = count + matrix[i][j] - 1;
                        
                    }
                    
                    count = count + 1;
                }
            }
        }
        
        return count;
        
        
    }
};
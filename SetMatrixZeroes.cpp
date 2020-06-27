class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col;
        
        if(row)
        {
            col = matrix[0].size();
        }
        
        vector<pair<int, int>> points;
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    points.push_back({i, j});
                }
            }
        }
        
        int size = points.size();
        
        for(int i = 0; i < size; i++)
        {
            int a = points[i].first;
            int b = points[i].second;
            
            helper(matrix, a, b);
        }
        
    }
    
    
    void helper(vector<vector<int>>& matrix, int a, int b)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i = 0; i < row; i++)
        {
            matrix[i][b] = 0;
        }
        
        for(int j = 0; j < col; j++)
        {
            matrix[a][j] = 0;
        }
    }
};
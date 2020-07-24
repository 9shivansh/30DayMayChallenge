class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        vector<pair<int, int>> zeroes;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    zeroes.push_back({i, j});
                }
            }
        }
        
        for(int i = 0; i < zeroes.size(); i++)
        {
            flip(matrix, zeroes[i].first, zeroes[i].second);
        }
            
        
    }
    
    
    void flip(vector<vector<int>>& matrix, int i, int j)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int k = 0; k < row; k++)
        {
            matrix[k][j] = 0;
        }
        
        for(int k = 0; k < col; k++)
        {
            matrix[i][k] = 0;
        }
    }
};
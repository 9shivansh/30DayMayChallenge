class Solution {
public:
    int countBattleships(vector<vector<char>>& board) 
    {
        int row = board.size();
        int col;
        
        int count = 0;
        
        if(row)
        {
            col = board[0].size();
        }
        
        else
        {
            return 0;
        }
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(board[i][j] == 'X')
                {
                    count = count + 1;
                    search(board, i, j);
                }
            }
        }
        
        return count;
        
    }
    
    
    void search(vector<vector<char>>& board, int i, int j)
    {
        int row = board.size();
        int col = board[0].size();
        
        
        if(i < 0 || i > row - 1 || j < 0 || j > col - 1 || board[i][j] == '.')
        {
            return;
        }
        
        board[i][j] = '.';
        
        search(board, i + 1, j);
        search(board, i - 1, j);
        search(board, i, j + 1);
        search(board, i, j + 1);
    }
};
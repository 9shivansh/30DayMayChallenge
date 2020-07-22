class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) 
    {
        int row = board.size();
        int col;
        
        if(row)
        {
            col = board[0].size();
        }
        
        int count = 0;
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(search(board, i, j, word, count))
                {
                    return true;
                }
            }
        }
        
        return false;
        
    }
    
    bool search(vector<vector<char>>& board, int i, int j, string word, int count)
    {
        if(count == word.size())
        {
            return true;
        }
        
        if(i < 0 || i >= board.size() || j >= board[0].size() || j < 0 || word[count] != board[i][j])
        {
            return false;
        }
        
        
        char c = board[i][j];
        
        board[i][j] = '1';
        
        bool result = search(board, i - 1, j, word, count + 1) || search(board, i + 1, j, word, count + 1) || search(board, i, j - 1, word, count + 1) || search(board, i, j + 1, word, count + 1);
        
        board[i][j] = c;
        
        return result;
        
    }
};
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int cnt=0;
        for(int i=0 ; i<board.size() ; i++)
            for(int j=0 ; j<board[i].size() ; j++)
                if(board[i][j]=='X')
                {
                    if((i>0 and board[i-1][j]=='X') or (j>0 and board[i][j-1]=='X')) continue;     // this means this X has already been counted.
                    cnt++;
                }
        return cnt;
    }
};
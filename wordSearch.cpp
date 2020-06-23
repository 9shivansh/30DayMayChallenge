class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) 
    {
        
       // finding postiton of the first character
        int row = board.size();
        int col;
        
        if(row)
        {
            col = board[0].size();
        }
        
        char c = word[0];
        
        int length = word.length();
        
        
        vector<pair<int, int>> directions;
        
        directions.push_back({1, 0});
        directions.push_back({0, 1});
        directions.push_back({0, -1});
        directions.push_back({-1, 0});
        
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(board[i][j] == c)
                {
                    cout << i << " " << j << endl;
                    queue<pair<int, int>> que;
                    que.push({i, j});
                    int count = 1;
                    
                    if(count == length)
                    {
                        return true;
                    }
                    
                    while(!que.empty())
                    {
                        int x = que.front().first;
                        int y = que.front().second;
                        
                        que.pop();
                        
                        for(int direction = 0; direction < 4; direction++)
                        {
                            int a = x + directions[direction].first;
                            int b = y + directions[direction].second;
                            
                            if(a > -1 && a < row && b > -1 && b < col && board[a][b] == word[count])
                            {
                                cout << a << " " << b << endl;
                                board[a][b] = '1';
                                que.push({a, b});
                                count = count + 1;
                                if(count == length)
                                {
                                    return true;
                                }
                                break;
                            }
                        }
                        
                    }
                    
                }
            }
        }
        
        
        return false;
    }
    
    
};



// find the position of the first character of the word
// when found, push it to the queue
// then check its neighbours
// if next character of word is found, then push that too
// repeat it until the last character is found
// maintain a number count, when it gets equal to length of the word, 
// return true
// else if midway, next letter is not found, return false
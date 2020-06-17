class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int row = image.size();
        int col;
        if(row)
        {
            col = image[0].size();
        }
        
        
        
        queue<pair<int, int>> que;
        
        que.push({sr, sc});
        
        int originalColor = image[sr][sc];
        
        if(newColor == originalColor)
        {
            return image;
        }
        
        vector<pair<int, int>> directions;
        
        directions.push_back({1, 0});
        
        directions.push_back({0, 1});
        
        directions.push_back({0, -1});
        
        directions.push_back({-1, 0});
        
        
        while(!que.empty())
        {
            int x = que.front().first;
            int y = que.front().second;
            
            que.pop();
            
            image[x][y] = newColor;
            
            for(int i = 0; i < 4; i++)
            {
                int a = x + directions[i].first;
                int b = y + directions[i].second;
                
                //cout << a << " " << b << endl;
                
                if(a >= 0 && a < row && b >= 0 && b < col && image[a][b] == originalColor)
                {
                    cout << a << " " << b << endl;
                    que.push({a, b});
                }
                
            }
            
        }
        
        return image;
        
    }
};
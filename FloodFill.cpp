class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int row = image.size();
        int col = image[0].size();
        
        
        queue<pair<int, int>> que;
        
        int OG = image[sr][sc];
        
        if(OG == newColor)
        {
            return image;
        }
        
        que.push({sr, sc});
        
        image[sr][sc] = newColor;
        
        vector<pair<int, int>> directions;
        
        directions.push_back({1, 0});
        
        directions.push_back({-1, 0});
        
        directions.push_back({0, 1});
        
        directions.push_back({0, -1});
        
        while(!que.empty())
        {
            int x = que.front().first;
            int y = que.front().second;
            que.pop();
            
            cout << x << " " << y << endl;
            
            for(int i = 0; i < 4; i++)
            {
                int a = x + directions[i].first;
                int b = y + directions[i].second;
                
                if(a < row && a > -1 && b < col && b > -1 && image[a][b] == OG)
                {
                    
                    que.push({a, b});
                    image[a][b] = newColor;
                }
            }
            
        }
        
        return image;
        
    }
};
class Solution {
public:
    
    void coloring(vector<vector<int>>& image, int i, int j, int oldColor, int newColor)
    {
        
        if(i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] == newColor)
        {
            return;
        }
        
        if(image[i][j] == oldColor)
        {
            image[i][j] = newColor;
            
            coloring(image, i + 1, j, oldColor, newColor);
            coloring(image, i - 1, j, oldColor, newColor);
            coloring(image, i, j + 1, oldColor, newColor);
            coloring(image, i, j - 1, oldColor, newColor);
        }
        
        
        
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        
        int oldColor = image[sr][sc];
        
        coloring(image, sr, sc, oldColor, newColor);
        
        return image;
        
        
        
    }
};
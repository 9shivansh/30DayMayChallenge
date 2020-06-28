class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        
        int row = matrix.size();
        
        int col;
        
        if(row)
        {
            col = matrix[0].size();
        }
        
        else
        {
            return false;
        }
        
        
        for(int i = 0; i < row; i++)
        {
            int start = 0;
            int end = col - 1;
            
            
            
            
            
            while(start <= end)
            {
                int mid = (start + end) / 2;
                
                if(matrix[i][mid] == target)
                {
                    return true;
                }
                
                if(matrix[i][mid] > target)
                {
                    end = mid - 1;
                }
                
                if(matrix[i][mid] < target)
                {
                    start = mid + 1;
                }   
            }
        }
        
        return false;
        
    }
};
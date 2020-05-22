class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        if(matrix.empty()) return false;
        int n=matrix.size(),m=matrix[0].size();
        
        int low=0,high=m*n-1;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int row=mid/m; // this essentially calculates the row of the middle index of the assumed 1D array
            int col=mid%m; // this also similarly calculates the col of the middle index
            
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]>target) high=mid-1;
            else low=mid+1;
        }
        
        return false;
        
    }
};
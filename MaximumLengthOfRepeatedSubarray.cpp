class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) 
    {
        int size1 = A.size();
        int size2 = B.size();
        
        if(size1 == 0 || size2 == 0)
        {
            return 0;
        }
        
        vector<vector<int>> dp(size1 + 1, vector<int>(size2 + 1, 0));
        
        int maximum = 0;
        
        for(int i = 1; i < size1 + 1; i++)
        {
            for(int j = 1; j < size2 + 1; j++)
            {
                if(A[i - 1] == B[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    maximum = max(dp[i][j], maximum);
                }
                
            }
        }
        
        return maximum;
        
    }
};
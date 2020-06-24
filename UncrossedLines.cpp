class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) 
    {
        
        int size1 = A.size();
        int size2 = B.size();
        
        
        vector<vector<int>> dp(size1 + 1, vector<int>(size2 + 1, 0));
        
        
        for(int i = 1; i < size1 + 1; i++)
        {
            for(int j = 1; j < size2 + 1; j++)
            {
                if(A[i - 1] == B[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                
                else
                {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        }
        
        
        return dp[size1][size2];
        
    }
};
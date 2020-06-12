class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
        int size = trust.size();
        if(size == 0 && N == 1)
        {
            return 1;
        }
        
        if(size == 0 && N != 1)
        {
            return -1;
        }
        vector<int> dp(N + 1, 0);
        
        for(int i = 0; i < size; i++)
        {
            dp[trust[i][0]] = dp[trust[i][0]] - 1;
            dp[trust[i][1]] = dp[trust[i][1]] + 1;
            
        }
        
        for(int i = 0; i <  N + 1; i++)
        {
            cout << dp[i] << " ";
            if(dp[i] == N - 1)
            {
                return i;
            }
        }
        
        return -1;
        
    }
};
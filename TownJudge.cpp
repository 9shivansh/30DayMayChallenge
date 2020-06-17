class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
        vector<int> dp(N + 1, 0);
        
        if(trust.size() == 0)
        {
            if(N == 1)
            {
                return 1;
            }
            
            else
            {
                return -1;
            }
        }
        
        for(int i = 0; i < trust.size(); i++)
        {
            dp[trust[i][0]] -= 1;
            dp[trust[i][1]] += 1;
        }
        
        for(int i = 0; i < N + 1; i++)
        {
            if(dp[i] == N - 1)
            {
                return i;
            }
        }
        
        return -1;
        
    }
};
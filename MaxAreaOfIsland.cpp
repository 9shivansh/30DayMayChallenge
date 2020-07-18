class Solution {
public:
    
     int solve(vector<vector<int>>& g,int i,int j)
    {
        if(i<0  ||  j<0  ||  i>=g.size() ||  j>=g[i].size() ||  g[i][j]==0)
        {
            return 0;
        }
        
        g[i][j]=0;
        int ans=1;
       
        int a,b,c,d;
        a=solve(g,i+1,j);
        b=solve(g,i-1,j);
        c=solve(g,i,j+1);
        d=solve(g,i,j-1);
        ans=ans +a+b+c+d;
        
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& g) {
         
        
        int i,j,ans,k;
        
        ans=0;
        
        for(i=0;i<g.size();i++)
        {
            for(j=0;j<g[i].size();j++)
            {
                if(g[i][j]==1)
                {
                    
                    ans=max(ans,solve(g,i,j));
                }
            }
        }
        
        
        return ans;
    }
};
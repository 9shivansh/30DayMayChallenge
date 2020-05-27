class Solution {

public:
    int orangesRotting(vector<vector<int>>& grid) {        
        queue<pair<int,int>> rottenOrangesQ;
        int freshOrganges = 0;
        for(int i=0; i<grid.size(); ++i)
        {
            for(int j=0; j<grid[0].size(); ++j)
            {
                if(grid[i][j] == 2)
                   rottenOrangesQ.push({i,j});//rottenOranges
                else if(grid[i][j] == 1)
                    freshOrganges++;//freshOrganges count
            }
        }
        
        if(freshOrganges == 0)//No fresh orange, return 0 days
            return 0;
        
        if(rottenOrangesQ.size() == 0)//No rotten oranges, simply return -1;
            return -1;
        
        int days = 0;
        vector<pair<int,int>> directions ={{-1,0},{0,1},{1,0},{0,-1}};//all four directions.
        while(!rottenOrangesQ.empty() && freshOrganges>0)//Run until no rotten oranges left in q.
        {
            int size = rottenOrangesQ.size();//same as level orer.
            for(int rottenOranges=0; rottenOranges<size; ++rottenOranges)
            {
                auto coordinates= rottenOrangesQ.front(); rottenOrangesQ.pop();//take rotten orange coordinate
                for(auto dir:directions)//navigate in all four direction.
                {
                    int i = coordinates.first+dir.first;
                    int j = coordinates.second+dir.second;
                    if(i<0 || j<0 || i==grid.size() || j==grid[i].size() || grid[i][j] != 1)
                        continue;
                    
                    grid[i][j]=2;
                    rottenOrangesQ.push({i,j});//Add new cordinate as rotten orange.
                    freshOrganges--;
                }
            }
            days++;
        }
        if(freshOrganges>0)
            return -1;
        return days;    
    }    
};
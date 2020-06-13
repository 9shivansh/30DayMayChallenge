class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // If no solution exists.
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;
        if(n==1 && grid[0][0] == 0)
            return 1;
        
        int directions[8][2] = {{0,-1}, {-1,-1}, {-1,0}, {-1,1},
                                {0,1}, {1,1}, {1,0}, {1,-1}};
        queue<pair<int, int>> bfsQueue;
        bfsQueue.push({0,0});
        int k=1;
        
        while(!bfsQueue.empty()) {
            int qSize = bfsQueue.size();
            ++k;
            while(qSize--) {
                int i = bfsQueue.front().first;
                int j = bfsQueue.front().second;
                // Marking current node as visited.
                grid[i][j] = -1;
                bfsQueue.pop();
                
                for(int d=0;d<8;++d){
                    int newI = i + directions[d][0];
                    int newJ = j + directions[d][1];
                    if(newI == n-1 && newJ == n-1)
                        return k;
                    if(newI >= 0 && newI < n && newJ >=0 && newJ < n &&
                      grid[newI][newJ] == 0){
                        bfsQueue.push({newI, newJ});
                        // Mark the new node also as visited so that this is not
                        // pushed to the queue again by other nodes.
                        grid[newI][newJ] = -1;
                    }
                    
                }
            }
        }
        return -1;
        
    }
};
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        int size = costs.size();
        vector<int> difference;
        int sum = 0;
        
        for(int i = 0; i < size; i++)
        {
            sum = sum + costs[i][0];
            vector<int> temp = costs[i];
            int diff = temp[0] - temp[1];
            difference.push_back(diff);
        }
        
        
        sort(difference.begin(), difference.end());
        
        for(int i = size / 2; i < size; i++)
        {
            sum = sum - difference[i];
        }
        
        return sum;
        
    }
};
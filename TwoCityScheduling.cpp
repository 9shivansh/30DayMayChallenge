class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        int size = costs.size();
        
        int sum = 0;
        
        vector<int> temp;
        
        for(int i = 0; i < size; i++)
        {
            sum = sum + costs[i][0];
            temp.push_back(costs[i][0] - costs[i][1]);
            cout << costs[i][0] - costs[i][1] << endl;
        }
        
        sort(temp.begin(), temp.end());
        
        
        for(int i = size / 2; i < size; i++)
        {
            sum = sum - temp[i];
        }
        
        return sum;
        
        
        
    }
};
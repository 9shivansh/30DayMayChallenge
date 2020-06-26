class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> result;
        
        
        for(int i = 0; i < numRows; i++)
        {
            if(i == 0)
            {
                vector<int> temp;
                temp.push_back(1);
                result.emplace_back(temp);
            }
            
            if(i == 1)
            {
                vector<int> temp;
                temp.push_back(1);
                temp.push_back(1);
                result.emplace_back(temp);
            }
            
            if(i > 1)
            {
                vector<int> temp;
                
                temp.push_back(1);
                
                int size = result[result.size() - 1].size();
                
                for(int i = 1; i < size; i++)
                {
                    int sum = result[result.size() - 1][i] + result[result.size() - 1][i - 1];
                    temp.push_back(sum);
                }
                
                temp.push_back(1);
                
                result.emplace_back(temp);
                
            }
            
        }
        
        return result;
        
    }
};
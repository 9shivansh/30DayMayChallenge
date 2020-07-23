class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> result;
        
        if(numRows == 0)
        {
            return result;
        }
        
        vector<int> temp;
        temp.push_back(1);
        
        
        
        
        while(numRows)
        {
            
            int size = temp.size();
            
            vector<int> next;
            
            next.push_back(1);
            
            for(int i = 0; i < size - 1; i++)
            {
                next.push_back(temp[i] + temp[i + 1]);
            }
            
            next.push_back(1);
            
            result.emplace_back(temp);
            temp = next;
            
            numRows--;
            
        }
        
        return result;
    }
};
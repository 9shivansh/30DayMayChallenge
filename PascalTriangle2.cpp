class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<int> k;
        k.push_back(1);
        
        
        if(rowIndex == 0)
        {
            return k;
        }
        
        while(rowIndex)
        {
            vector<int> last = k;
            vector<int> temp;
            temp.push_back(1);
            
            for(int i = 1; i < last.size(); i++)
            {
                temp.push_back(last[i] + last[i - 1]);
            }
            
            temp.push_back(1);
            k = temp;
            rowIndex--;
        }
        
        return k;
    }
};
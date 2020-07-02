class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        int size = trips.size();
        
        vector<int> temp(1000, 0);
        
        for(int i = 0; i < size; i++)
        {
            int count = trips[i][0];
            int start = trips[i][1];
            int end = trips[i][2];
            
            
            for(int j = start; j < end; j++)
            {
                int num = temp[j] + count;
                
                if(num > capacity)
                {
                    return false;
                }
                
                else
                {
                    temp[j] = num;
                }
            }
            
            
        }
        
        
        return true;
        
    }
};
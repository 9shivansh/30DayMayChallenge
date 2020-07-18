class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
     
        vector<int> sorted = heights;
        int size = heights.size();
        
        sort(sorted.begin(), sorted.end());
        int count = 0;
        
        for(int i = 0; i < size; i++)
        {
            if(heights[i] != sorted[i])
            {
                count =  count + 1;
            }
        }
        
        return count;
        
    }
};
class Solution {
public:
    int numTimesAllBlue(vector<int>& light) 
    {
        int size = light.size();
        
        vector<int> bulb(size, 0);
        int result = 0;
        
        int maxTillNow = -1;
        
        
        for(int i = 0; i < size; i++)
        {
            maxTillNow = max(light[i], maxTillNow);
            
            if(maxTillNow == i + 1)
            {
                result++;
            }
        
        }
        
        return result;
    }
};
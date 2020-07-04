class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) 
    {
        vector<int> result;
           
        int start = 0;
        int end = cheeseSlices;
        
        while(start <= end)
        {
            int mid = (start + end) / 2;
            
            int a = mid * 4;
            int b = (cheeseSlices - mid) * 2;
            
            if(a + b == tomatoSlices)
            {
                result.push_back(mid);
                result.push_back(cheeseSlices - mid);
                return result;
            }
            
            if(a + b > tomatoSlices)
            {
                end = mid - 1;
            }
            
            if(a + b < tomatoSlices)
            {
                start = mid + 1;
            }
            
        }
        
        return result;
        
    }
};

// as we can see, total number of burgers will be equal to cheeseSlices
// from 0 to cheeseSlices, try to find the match
// where i is the number of JumboBurgers
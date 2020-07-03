class Solution {
public:
    int xorOperation(int n, int start) 
    {
        
        int answer = 0;
        
        for(int i = 0; i < n; i++)
        {
            int p = 2 * i;
            
            answer = answer ^ (start + p);
        }
        
        return answer;
        
    }
};
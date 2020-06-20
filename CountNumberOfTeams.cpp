class Solution {
public:
    int numTeams(vector<int>& rating) 
    {
        int size = rating.size();
        
        if(size < 2)
        {
            return 0;
        }
        
       int answer = 0;
        
        
        
        for(int j = 1; j < size - 1; j++)
        {
            int count1 = 0;
            int count2 = 0;
            int count3 = 0;
            int count4 = 0;
            
            for(int i = 0; i < j; i++)
            {
                if(rating[i] < rating[j])
                {
                    count1 = count1 + 1;
                }
                
                if(rating[i] > rating[j])
                {
                    count2 = count2 + 1;
                }
            }
            
            for(int k = j + 1; k < size; k++)
            {
                if(rating[k] > rating[j])
                {
                    count3 = count3 + 1;
                }
                
                if(rating[k] < rating[j])
                {
                    count4 = count4 + 1;
                }
            }
            
            answer = answer + (count1 * count3) + (count2 * count4);
        }
        
        return answer;
        
    }
};
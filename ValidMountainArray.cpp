class Solution {
public:
    bool validMountainArray(vector<int>& A) 
    {
        int size = A.size();
        
        int flag = 0;
        
        if(size <= 1)
        {
            return false;
        }
        
        
        for(int i = 0; i < size; i++)
        {
            if(flag == 0)
            {
                if(i == 0)
                {
                    if(A[i] >= A[i + 1])
                    {
                        return false;
                    }
                }
                
                else
                {
                    if(A[i] <= A[i - 1])
                    {
                        flag = 1;
                    }
                }
                
            }
            
            if(flag == 1)
            {
                if(A[i] >= A[i - 1])
                {
                    return false;
                }

            }
        }
        
        if(flag == 0)
        {
            return false;
        }
        
        return true;
        
    }
};
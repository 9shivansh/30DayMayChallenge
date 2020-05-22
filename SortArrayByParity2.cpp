class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) 
    {
        
        stack<int> even;
        stack<int> odd;
        
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i] % 2 == 0)
            {
                even.push(A[i]);
            }
            else
            {
                odd.push(A[i]);
            }
        }
        
        for(int i = 0; i < A.size(); i++)
        {
            if(i % 2 == 0)
            {
                A[i] = even.top();
                even.pop();
            }
            
            else
            {
                A[i] = odd.top();
                odd.pop();
            }
        }
        
        return A;
        
    }
};
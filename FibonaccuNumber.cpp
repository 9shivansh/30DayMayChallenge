class Solution {
public:
    int fib(int N) 
    {
        vector<int> temp;
        
        temp.push_back(0);
        temp.push_back(1);
        
        
        
        if(N < 2)
        {
            return N;
        }
        
        for(int i = 2; i < N + 1; i++)
        {
            cout << temp[temp.size() - 1] + temp[temp.size() - 2] << endl;
            temp.push_back(temp[temp.size() - 1] + temp[temp.size() - 2]);
        }
        
        return temp[N];
        
    }
};
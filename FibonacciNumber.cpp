class Solution {
public:
    int fib(int N) 
    {
        
        vector<int> fibonacci;
        
        fibonacci.push_back(0);
        
        fibonacci.push_back(1);
        
        if(N < 2)
        {
            return fibonacci[N];
        }
        
        for(int i = 2; i <= N; i++)   
        {
            fibonacci.push_back(fibonacci[i - 1] + fibonacci[i - 2]);
            //cout << fibonacci[i];
        }
        
        return fibonacci[N];
        
    }
};
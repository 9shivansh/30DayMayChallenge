class Solution {
public:
    set<int> s1;
    bool isHappy(int n) 
    {
        if(s1.find(n) != s1.end())
        {
            return false;
        }
        
        s1.insert(n);
        
        long int sum = 0;
        
        while(n)
        {
            int p = n % 10;
            cout << p << endl;
            sum = sum  + (p * p);
            cout << sum << endl;
            n = n / 10;
            
            cout << "---------" << endl;
        }
        if(sum == 1)
        {
            return true;
        }
        
        return isHappy(sum);
    }
};
class Solution {
public:
    bool isHappy(int n) 
    {
        unordered_map<int, int> map;
        
        map[n]++;
        int sum = find(n);
        
        
        while(sum != 1)
        {
            if(map.find(sum) != map.end())
            {
                return false;
            }
            
            else
            {
                map[sum]++;
                sum = find(sum);
            }
            
            cout << sum << endl;
        }
        
        return true;
        
    }
    
    int find(int n)
    {
        int sum = 0;
        while(n)
        {
            int p = n % 10;
            sum += p * p;
            n = n / 10;
        }
        
        return sum;
    }
};
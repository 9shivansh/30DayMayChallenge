class Solution {
public:
    int findComplement(int num) 
    {
        int sum = 0;
        int count = 0;
        while(num)
        {
            if(num % 2 == 0)
            {
                sum = sum + pow(2,count);
            }
            count = count + 1;
            num = num / 2;
        }
    
        cout << sum << endl;
        return sum;
    }
};
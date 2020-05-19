class Solution {
public:
    int addDigits(int num) 
    {
        
        int answer = helper(num);
        return answer;
    }
    
    int helper(int num)
    {
        int sum = 0;
        
        while(num)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }
        
        if(sum > 9)
        {
            return helper(sum);
        }
        
        return sum;
    }
};
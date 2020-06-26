class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> result;
        
        string s1 = "FizzBuzz";
        string s2 = "Fizz";
        string s3 = "Buzz";
        
        for(int i = 1; i < n + 1; i++)
        {
            
           // cout << c << endl;
            //
            if(i % 5 == 0 && i % 3 == 0)
            {
                result.push_back("FizzBuzz");
            }
            
            else if(i % 3 == 0)
            {
                result.push_back("Fizz");
            }
            
            else if(i % 5 == 0)
            {
                result.push_back("Buzz");
            }
            
            else
            {
                result.push_back(to_string(i));
            }
        }
        
        return result;
        
    }
};
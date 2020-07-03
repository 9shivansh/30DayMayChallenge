class Solution {
public:
    
    struct comp
    {
        bool operator() (int a, int b)
        {
            string i = to_string(a) + to_string(b);
            string j = to_string(b) + to_string(a);
            
            return i > j;
        }
        
    }
    myComp;
    
    string largestNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end(), myComp);
        
        string result = "";
        
        int size = nums.size();
        
        if(nums[0] == 0)
        {
                return "0";
        }
            
        
        for(int i = 0; i < size; i++)
        {
            
            result = result + to_string(nums[i]);
        }
        
        return result;
        
    }
};
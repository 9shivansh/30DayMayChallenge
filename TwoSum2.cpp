class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int size = numbers.size();
        
        vector<int> result;
        int start = 0;
        int end = size - 1;
        
        while(start < end)
        {
            if(numbers[start] + numbers[end] == target)
            {
                result.push_back(start + 1);
                result.push_back(end + 1);
                return result;
            }
            
            if(numbers[start] + numbers[end] > target)
            {
                end = end - 1;
            }
            
            if(numbers[start] + numbers[end] < target)
            {
                start = start + 1;
            }
        }
        
        
        return result;
        
    }
};
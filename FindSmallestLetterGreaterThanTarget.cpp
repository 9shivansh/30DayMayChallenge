class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int size = letters.size();
        
        
        
        int start = 0;
        int end  = size - 1;
        
        if(letters[end] <= target)
        {
            return letters[start];
        }
        
        while(start < end)
        {
            int mid = (start + end) / 2;
            
            
            if(letters[mid] > target)
            {
                end = mid;
            }
            
            else
            {
                start = mid + 1;
            }
        }
        
        if(letters[start] == target)
        {
            return letters[start + 1];
        }
        
        return letters[start];
    }
};
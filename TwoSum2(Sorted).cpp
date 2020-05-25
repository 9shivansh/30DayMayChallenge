class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> temp;
        for(int i = 0; i < numbers.size(); i++)
        {
            int a = helper(numbers, target - numbers[i]);
            if(a != -1 && a != i)
            {
                temp.push_back(i + 1);
                temp.push_back(a + 1);
                sort(temp.begin(), temp.end());
                break;
            }
        }
        
        return temp;
        
        
    }
    
    int helper(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        
        while(start <= end)
        {
            int mid = (start + end) / 2;
            
            if(nums[mid] == target)
            {
                return mid;
            }
            
            if(nums[mid] > target)
            {
                end = mid - 1;
            }
            
            if(nums[mid] < target)
            {
                start = mid + 1;
            }
        }
        
        return -1;
    }
};
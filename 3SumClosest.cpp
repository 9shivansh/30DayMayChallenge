class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int min = INT_MAX;
        int answer = 0;
        
        if(nums.size() < 3)
        {
            return NULL;
        }
        
        for(int i = 0; i < nums.size() - 2; i++)
        {
            for(int j = i + 1; j < nums.size() - 1; j++)
            {
                for(int k = j + 1; k < nums.size(); k++)
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    
                    int diff = abs(sum - target);
                    
                    if(diff < min)
                    {
                        min = abs(target - sum);
                        answer = sum; 
                        cout << "minimum is " << min << endl;
                    }
                }
            }
        }
        
        return answer;
        
    }
};
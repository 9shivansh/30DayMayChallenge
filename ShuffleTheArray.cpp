class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> result;
        
        int i = 0;
        int p = (nums.size() / 2);
        
        while(p < nums.size())
        {
            cout << nums[i] << " " << nums[p] << endl;
            result.push_back(nums[i]);
            result.push_back(nums[p]);
            i++;
            p++;
        }
        
        return result;
    }
};
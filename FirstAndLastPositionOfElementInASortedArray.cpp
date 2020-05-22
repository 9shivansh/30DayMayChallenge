class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2);
        if(nums.size()==0||nums[0]>target || nums[nums.size()-1]<target || binary_search(nums.begin(), nums.end(), target)==0){
            result[0] = -1;
            result[1] = -1;
        }else{
            result[0] = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
            result[1] = upper_bound(nums.begin(), nums.end(), target) - nums.begin()-1;
        }
        return result;
    }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size()<3) return {};
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size()-2; i++){
            if (i>0 && nums[i]==nums[i-1]) continue;
            else if (nums[i]>0) break;
            int j = i+1, k = nums.size()-1;
            while (j<k){
                if (nums[j]+nums[k]==-nums[i]){
                    res.push_back({nums[i], nums[j], nums[k]});
                    while (j+1<nums.size() && nums[j+1]==nums[j]) j++;
                    j++;
                }else if (nums[j]+nums[k]<-nums[i]){
                    j++;
                }else{
                    k--;
                }
            }
        }
        return res;
    }
};
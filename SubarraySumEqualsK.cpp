class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]++; // for the case when sum-k=0, mp[0]=1
        int ans=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
};


// prefix technique
// if there is a sum already present whose difference from the sum till now is equal to k, 
// then the sum between the elements in between is equal to k
// we,ll keep on adding to the variable sum
// then we'll keep on checking if there is a variable
// in the map, if there is an element whose sum - k
// is present, then icrease the count of subarray

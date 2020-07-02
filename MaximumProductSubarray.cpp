class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size();
        vector<int> maxP(size,0),minP(size,0);
        maxP[0]=minP[0]=nums[0];
        int maxx=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            int t1=max(nums[i]*maxP[i-1],nums[i]*minP[i-1]);
            maxP[i]=max(t1,nums[i]);
            t1=min(nums[i]*maxP[i-1],nums[i]*minP[i-1]);
            minP[i]=min(t1,nums[i]);
            
            maxx= max(maxx,maxP[i]);
        }
        return maxx;
    }
};
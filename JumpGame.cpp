class Solution {
public:
    bool canJump(vector<int>& nums) {
        int N = nums.size();
        if (N<=1) return true;
        int leastStep=1;
        for (int i=N-2; i>=1; --i) {
		// check if the position must be jumped over
            if (nums[i]>=leastStep) leastStep = 1;
            else leastStep++;
        }
        return nums[0]>=leastStep;
}
    
};
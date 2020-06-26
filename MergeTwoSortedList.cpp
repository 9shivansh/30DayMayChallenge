class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        const int vs = nums1.size();

        int ptr0 = m + n - 1;
        if(ptr0 < 0) return;

        int tail = m-1;
        if(tail<0) {
            for(int i=0;i<n;++i){
                nums1[i] = nums2[i];
            }
            return;
        }
        
        for (int i = n - 1; i >= 0;) {
            if (tail < 0)
                nums1[ptr0--] = nums2[i--]; // edge case: nums1 = [2,0], and nums2 = [1]. After swap, tail == -1. So in this case, we just need to copy nums2[i] to nums1[ptr0].
            else if (nums2[i] >= nums1[tail]) {
                nums1[ptr0--] = nums2[i--];
            }
            else {
                swap(nums1[ptr0--], nums1[tail--]);
            }
        }
        
        
    }
};
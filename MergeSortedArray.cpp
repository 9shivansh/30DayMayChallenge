class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int nums1Start = m - 1;
        int nums2Start = n - 1;
        int totalStart = m + n - 1;
        
        
        while(nums1Start > -1 && nums2Start > -1)
        {
            if(nums1[nums1Start] > nums2[nums2Start])
            {
                nums1[totalStart] = nums1[nums1Start];
                totalStart = totalStart - 1;
                nums1Start = nums1Start - 1;
            }
            
            else
            {
                nums1[totalStart] = nums2[nums2Start];
                nums2Start = nums2Start - 1;
                totalStart = totalStart - 1;
            }
        }
        
        while(nums2Start > -1)
        {
            nums1[totalStart] = nums2[nums2Start];
            totalStart = totalStart - 1;
            nums2Start = nums2Start - 1;
        }
        
        
        
    }
};

// start from back
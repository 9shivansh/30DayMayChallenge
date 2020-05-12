class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        
        if len(nums)==1 :
            return nums[0]
        def binary(i,j) :
            if i>j :
                return 0
            mid=(i+j)//2
            if mid==0 :
                if nums[mid]!=nums[mid+1] :
                    return nums[mid]
                return 0
            if mid==len(nums)-1 :
                if nums[mid]!=nums[mid-1] :
                    return nums[mid]
                return 0
            if nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1] :
                return nums[mid]
            else :
                return binary(i,mid-1) or binary(mid+1,j)
        i,j=0,len(nums)-1 
        return (binary(i,j))   
        
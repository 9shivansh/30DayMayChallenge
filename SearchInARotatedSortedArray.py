class Solution:
    def search(self, nums: List[int], target: int) -> int:
        if nums == []:
            return -1
        begin = 0;
        end = len(nums) -1
        
        while begin < end :
            middle = (begin + end)//2
            if nums[middle] > nums[end]:
                begin = middle + 1
            else:
                end = middle
     #now begin at smallest index
        truestart = begin
        begin = 0
        end = len(nums) -1
         # figure out which sublist to start at
        if target >= nums[truestart] and target <=nums[end]:
              begin = truestart
        else:
              end = truestart
    
        while begin <= end :
             middle = (begin + end)//2
             if nums[middle] == target:
                 return middle
             elif nums[middle] > target:
                 end = middle -1
             else:
                  begin = middle + 1
        return -1
        
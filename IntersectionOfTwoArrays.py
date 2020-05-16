class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        
        a = set(nums1)
        
        b = set(nums2)
        
        answer = []
        
        for num in b:
            
            if num in a:
                
                answer.append(num)
                
        return answer
        
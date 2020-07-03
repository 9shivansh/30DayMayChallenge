class Solution:
    def shipWithinDays(self, weights: List[int], D: int) -> int:
        left=0
        right=max(weights)*len(weights)//D+1
        while left<=right:
            mid=(left+right)//2
            if not isPossible(mid,weights,D):
                left=mid+1
            else:
                right=mid-1
        return left
        
def isPossible(capacity,weights,daysCount):
    remain=capacity
    count=1
    for w in weights:
        if w>capacity:
            return False
        if w>remain:
            count+=1
            remain=capacity
        remain-=w
    return count<=daysCount
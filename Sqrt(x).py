class Solution:
    def mySqrt(self, x: int) -> int:
        low=0
        high=x
        while low<high:
            mid=(low+high)//2
            if mid*mid==x:
                return int(mid)
            elif mid*mid<x:
                low=mid+1
            else:
                high=mid-1
        if low*low>x:
            return low-1
        else:
            return low
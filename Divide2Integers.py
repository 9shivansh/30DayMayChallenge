class Solution(object):
    def divide(self, dividend, divisor):

        res = int(abs(dividend)//abs(divisor))
        if dividend<0 and divisor<0:
            return min(res,2147483647)
        elif dividend<0 or divisor<0:
            return max(-res,-2147483648)
        
        return res
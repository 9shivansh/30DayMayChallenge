class Solution:
    def sumFourDivisors(self, nums):
        def factors(n):
            div = set()
            for i in range(1, int(n ** 0.5) + 1):
                if n % i == 0:
                    div.add(i)
                    div.add(n // i)
                    if len(div) > 4:
                        return 0
            return sum(div) if len(div) == 4 else 0
        s=0
        for n in nums:
            s+=factors(n)
        return s
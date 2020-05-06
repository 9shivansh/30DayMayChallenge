def majorityElement(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        a = {}

        for c in nums:
            if c in a:
                a[c] += 1
                if a[c] > len(nums)/2:
                    return c
            else:
                a[c] = 1
            
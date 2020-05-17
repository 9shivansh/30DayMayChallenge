class Solution:
    def get_next_num(self, num: str) -> str:
        result = []
        len_num = len(num)
        temp = num[0]
        count = 0
        for i in range(len_num):
            if num[i] == temp:
                count = count + 1
            if num[i] != temp:
                result.append(str(count))
                result.append(temp)
                temp = num[i]
                count = 1
        result.append(str(count))
        result.append(temp)

        return ''.join(result)

    def countAndSay(self, n: int) -> str:
        i = 0
        num = '1'
        if n == 1:
            return '1'
        while i < n-1:
            num = self.get_next_num(num)
            i = i + 1
        return num
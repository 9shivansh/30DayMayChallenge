class Solution:
    def longestDiverseString(self, a: int, b: int, c: int) -> str:
        result = []
        choices = {'a':a, 'b':b, 'c':c}
        for _ in range(a+b+c):
            for char, val in sorted(choices.items() , key = lambda x: x[1], reverse=True):
                if val and result[-2:] != [char, char]:
                    result.append(char)
                    choices[char]-=1
                    break
        return "".join(result)
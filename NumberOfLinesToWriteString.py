class Solution:
    def numberOfLines(self, widths: List[int], S: str) -> List[int]:
        hashmap={}
        for i in range(len(widths)):
            hashmap[chr(97+i)] = widths[i]
        lines = 1
        count = 0
        for letter in S:
            count += hashmap[letter]
            if count >= 100:
                if count > 100:
                    count = hashmap[letter]
                else:
                    count = 0
                lines += 1
        return [lines,count]
from collections import Counter
class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        c = Counter(chars) #1
        
        res = 0
        for word in words:
            w = Counter(word) #2
            
            for letter in w: #3
                if c[letter] < w[letter]:
                    break #3a
            else: #3b
                res += len(word)
        
        return res
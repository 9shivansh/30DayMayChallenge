class Solution(object):
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        c1, c2 = collections.Counter(p), collections.Counter(s[:len(p)])
        i = 0
        ans = []
        while i < len(s) - len(p):
            if c1 == c2:
                ans.append(i)
            c = s[i + len(p)]
            if c in c2:
                c2[c] += 1
            else:
                c2[c] = 1
            c2[s[i]] -= 1
            if c2[s[i]] == 0:
                del c2[s[i]]
            i += 1
        
        if c1 == c2:
            ans.append(i)
        
        return ans
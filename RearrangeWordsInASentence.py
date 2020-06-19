class Solution(object):
    def arrangeWords(self, text):
        """
        :type text: str
        :rtype: str
        """
        res = []
        for w in text.split():
            w = w.lower()            
            res.append(w)
        res = sorted(res, key=len)
        res = [res[0].capitalize()] + res[1:]
        return ' '.join(res)
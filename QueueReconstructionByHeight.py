class Solution(object):
    def reconstructQueue(self, people):

        people = sorted(people, key=lambda x: x[1])
        people = sorted(people, key=lambda x: -x[0])
        res = []
        for p in people:
            res.insert(p[1], p)
            #print(p[1], p)
            #print(res)
        return res
        
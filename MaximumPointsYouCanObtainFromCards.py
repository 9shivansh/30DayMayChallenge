class Solution(object):
    def maxScore(self, cardPoints, k):
        #print 'cardPoints:', cardPoints
        #print 'k:', k
        frontSum, backSum = [0], [0]
        for n in cardPoints:
            frontSum.append(frontSum[-1]+n)
            #print 'frontSum:', frontSum
        for n in cardPoints[::-1]:
            backSum.append(backSum[-1]+n)
            #print 'backSum:', backSum
        allCombinations = [frontSum[i]+backSum[k-i] for i in range(k+1)]
        #print 'allCombinations:', allCombinations
        return max(allCombinations)
        